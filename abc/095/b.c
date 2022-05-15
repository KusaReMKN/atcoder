comp(a, b)
	int *a, *b;
{
	return *a - *b;
}

main()
{
	auto n, x, m[100];
	register i, cnt;

	scanf("%d%d", &n, &x);
	for (i = 0; i < n; i++)
		scanf("%d", m + i);
	qsort(m, n, sizeof(m[0]), comp);
	for (i = 0; i < n; i++)
		x -= m[i];
	cnt = n;
	while (x >= m[0])
		cnt++, x -= m[0];
	printf("%d\n", cnt);
}
