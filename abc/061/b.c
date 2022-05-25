main()
{
	auto n, m, a, b, r[50];
	register i;

	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
		r[i] = 0;
	for (i = 0; i < m; i++)
		scanf("%d%d", &a, &b), r[a-1]++, r[b-1]++;
	for (i = 0; i < n; i++)
		printf("%d\n", r[i]);
}
