main()
{
	auto a, b;
	register i, m;
	long ab;
	char s[8];
	extern double sqrt();

	scanf("%d%d", &a, &b);
	sprintf(s, "%d%d", a, b);
	sscanf(s, "%ld", &ab);
	m = (int)sqrt((double)ab);
	for (i = 1; i <= m; i++)
		if ((long)i * i == ab)
			return puts("Yes"), 0;
	puts("No");
}
