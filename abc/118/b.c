main()
{
	auto n, m, k, a;
	auto food[31];
	register i, j, cnt;

	scanf("%d%d", &n, &m);
	for (i = 0; i <= m; i++)
		food[i] = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &k);
		for (j = 0; j < k; j++) {
			scanf("%d", &a);
			food[a]++;
		}
	}
	cnt = 0;
	for (i = 0; i <= m; i++)
		if (food[i] == n)
			cnt++;
	printf("%d\n", cnt);
}
