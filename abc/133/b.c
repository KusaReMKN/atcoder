main()
{
	int n, d, x[10][10];
	int c, i, ii, j, k, l;

	scanf("%d%d", &n, &d);
	for (i = 0; i < n; i++)
		for (j = 0; j < d; j++)
			scanf("%d", &x[i][j]);
	c = 0;
	for (i = 0; i < n; i++)
		for (ii = i+1; ii < n; ii++) {
			l = 0;
			for (j = 0; j < d; j++)
				l += (x[i][j]-x[ii][j]) * (x[i][j]-x[ii][j]);
			for (k = 1; k * k <= l; k++)
				if (k * k == l)
					c++;
		}
	printf("%d\n", c);
}
