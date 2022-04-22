main()
{
	int h, w, a[50][50];
	int i1, j1, i2, j2;

	scanf("%d%d", &h, &w);
	for (i1 = 0; i1 < h; i1++)
		for (j1 = 0; j1 < w; j1++)
			scanf("%d", &a[i1][j1]);
	for (i1 = 0; i1 < h; i1++)
		for (j1 = 0; j1 < w; j1++)
			for (i2 = i1+1; i2 < h; i2++)
				for (j2 = j1+1; j2 < w; j2++)
#define test(i1, j1, i2, j2) (a[i1][j1] + a[i2][j2] > a[i2][j1] + a[i1][j2])
					if (test(i1, j1, i2, j2))
						return puts("No"), 0;
	puts("Yes");
}
