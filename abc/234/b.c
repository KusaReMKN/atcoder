main()
{
	int i, j, n, x[100], y[100];
	double max = 0, tmp;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d%d", x + i, y + i);
	for (i = 0; i < n; i++)
		for (j = i; j < n; j++)
			if (max < (tmp = hypot(x[i]-x[j], y[i]-y[j])))
				max = tmp;
	printf("%f\n", max);
}
