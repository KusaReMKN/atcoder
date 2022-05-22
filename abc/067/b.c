desc(a, b)
	register int *a, *b;
{
	return *b - *a;
}

main()
{
	auto n, k, l[50];
	register i, sum;

	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++)
		scanf("%d", l+i);
	qsort(l, n, sizeof(l[0]), desc);
	sum = 0;
	for (i = 0; i < k; i++)
		sum += l[i];
	printf("%d\n", sum);
}
