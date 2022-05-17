main()
{
	auto h, w;
	auto sum[101];
	char a[101][101];
	register i, j;
	extern char *strchr();

	scanf("%d%d", &h, &w);
	for (i = 0; i < w; i++)
		sum[i] = 0;
	for (i = 0; i < h; i++) {
		scanf("%s", a[i]);
		for (j = 0; j < w; j++)
			if (a[i][j] != '.')
				sum[j]++;
	}
	for (i = 0; i < h; i++) {
		if (strchr(a[i], '#') == 0)
			continue;
		for (j = 0; j < w; j++)
			if (sum[j])
				putchar(a[i][j]);
		putchar('\n');
	}
}
