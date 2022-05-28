main()
{
	auto h, w;
	char s[101];
	auto p[2][2];
	register i, j, n;

	scanf("%d%d", &h, &w);
	n = 0;
	for (i = 0; i < h && n < 2; i++) {
		scanf("%s", s);
		for (j = 0; j < w && n < 2; j++)
			if (s[j] == 'o')
				p[n][0] = j, p[n][1] = i, n++;
	}
	printf("%d\n", abs(p[0][0]-p[1][0]) + abs(p[0][1]-p[1][1]));
}
