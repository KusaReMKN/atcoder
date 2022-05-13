main()
{
	char s[11];
	auto x;
	register i, l, min;

	gets(s);
	l = strlen(s);
	min = 9999;
	for (i = 0; i <= l-3; i++) {
		sscanf(s + i, "%3d", &x);
		if (abs(x - 753) < min)
			min = abs(x - 753);
	}
	printf("%d\n", min);
}
