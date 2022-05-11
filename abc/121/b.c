main()
{
	auto n, m, c;
	auto b[21], a;
	register i, j, cnt, sum;

	scanf("%d%d%d", &n, &m, &c);
	for (i = 0; i < m; i++)
		scanf("%d", b + i);
	cnt = 0;
	for (i = 0; i < n; i++) {
		sum = 0;
		for (j = 0; j < m; j++) {
			scanf("%d", &a);
			sum += b[j] * a;
		}
		if (sum + c > 0)
			cnt++;
	}
	printf("%d\n", cnt);
}
