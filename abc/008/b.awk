1 { ; }	# Ignore
{
	s[$1] += 1;
}
END {
	max = 0;
	name = "";
	for (key in s)
		if (s[key] > max) {
			max = s[key];
			name = key;
		}
	print name;
}
