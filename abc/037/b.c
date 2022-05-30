main()
{
	auto n, q, l, r, t;
	auto a[100];
	register i, j;

	scanf("%d%d", &n, &q);
	for (i = 0; i < n; i++)
		a[i] = 0;
	for (i = 0; i < q; i++) {
		scanf("%d%d%d", &l, &r, &t);
		for (j = l-1; j <= r-1; j++)
			a[j] = t;
	}
	for (i = 0; i < n; i++)
		printf("%d\n", a[i]);
}
