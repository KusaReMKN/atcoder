commonchar(x, y)
	register char *x, *y;
{
	auto chartab[256];
	register i, cnt;

	for (i = 0; i < 256; i++)
		chartab[i] = 0;
	for (; *x; x++)
		if (~chartab[*x] & 01)
			chartab[*x] |= 01;
	for (; *y; y++)
		if (~chartab[*y] & 02)
			chartab[*y] |= 02;
	cnt = 0;
	for (i = 0; i < 256; i++)
		if ((chartab[i] & 03) == 03)
			cnt++;
	return cnt;
}

main()
{
	auto n;
	char s[101], x[101], y[101];
	register i, cc, max;

	scanf("%d%s", &n, s);
	max = 0;
	for (i = 1; i < n-1; i++) {
		sprintf(x, "%.*s", i, s);
		sprintf(y, "%s", s+i);
		cc = commonchar(x, y);
		if (max < cc)
			max = cc;
	}
	printf("%d\n", max);
}
