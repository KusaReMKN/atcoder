main()
{
	auto n, t[100], m, p, x;
	register i, sum;

	scanf("%d", &n);
	sum = 0;
	for (i = 0; i < n; i++)
		scanf("%d", &t[i]), sum += t[i];
	scanf("%d", &m);
	for (i = 0; i < m; i++)
		scanf("%d%d", &p, &x), printf("%d\n", sum - t[p-1] + x);
}
