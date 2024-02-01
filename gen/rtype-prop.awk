BEGIN {
	FS = "( *#.*| +; +)"

	print "/* This file is autogenerated by gen/rtype-prop; DO NOT EDIT. */"
	print ""
	print "#include \"rtype.h\""
	print ""
	print "#include \"internal/common.h\""
	print ""
	print "/* clang-format off */"
	print ""
}

$2 == prop || (prop == "Indic_Conjunct_Break" && $2 ~ /InCB;/) {
	n = split($1, a, /\.\./)
	lo = strtonum("0x" a[1])
	hi = strtonum("0x" a[n])

	for (i = lo; i <= hi; i++)
		xs[i] = 1
}

END {
	if (word == "is") {
		for (i = 0; i <= 0xFF; i++) {
			if (xs[i])
				mask = or(mask, lshift(1, i))
		}
	}
	if (mask > 0) {
		print  "#if BIT_LOOKUP"
		print  "static const unsigned _BitInt(LATIN1_MAX + 1) mask ="
		printf "\t0x%064Xuwb;\n", mask
		print  "#endif"
		print  ""
	}

	print "static const struct {"
	print "\trune lo, hi;"
	print "} lookup_tbl[] = {"

	for (i = 0; i <= 0x10FFFF; i++) {
		if (!xs[i])
			continue
		lo = i
		while (xs[i + 1])
			i++
		printf "\t{0x%06X, 0x%06X},\n", lo, i
	}

	print  "};"
	print  ""
	print  "#define TYPE      bool"
	print  "#define TABLE     lookup_tbl"
	print  "#define DEFAULT   false"
	print  "#define HAS_VALUE 0"
	print  "#include \"internal/rtype/lookup-func.h\""
	print  ""
	print  "bool"
	printf "rprop_%s_%s(rune ch)\n", word, tolower(prop)
	print  "{"
	if (mask > 0) {
		print "\treturn"
		print "#if BIT_LOOKUP"
		print "\t\tch <= LATIN1_MAX ? (mask & (1 << ch)) :"
		print "#endif"
		print "\t\tlookup(ch);"
	} else
		print "\treturn lookup(ch);"
	print  "}"
}
