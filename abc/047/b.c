main()
{
	auto w, h, n, x, y, a;
	auto s[100][100];
	register i, j, k;

	scanf("%d%d%d", &w, &h, &n);
	for (i = 0; i < h; i++)
		for (j = 0; j < w; j++)
			s[i][j] = 1;
	for (k = 0; k < n; k++) {
		scanf("%d%d%d", &x, &y, &a);
		switch (a) {
		case 1:
			for (i = 0; i < h; i++)
				for (j = 0; j < x; j++)
					s[i][j] = 0;
			break;
		case 2:
			for (i = 0; i < h; i++)
				for (j = x; j < w; j++)
					s[i][j] = 0;
			break;
		case 3:
			for (i = 0; i < y; i++)
				for (j = 0; j < w; j++)
					s[i][j] = 0;
			break;
		case 4:
			for (i = y; i < h; i++)
				for (j = 0; j < w; j++)
					s[i][j] = 0;
			break;
		}
	}
	k = 0;
	for (i = 0; i < h; i++)
		for (j = 0; j < w; j++)
			k += s[i][j];
	printf("%d\n", k);
}
