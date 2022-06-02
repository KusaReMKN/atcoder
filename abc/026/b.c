desc(a, b)
	int *a, *b;
{
	return *b - *a;
}

main()
{
	auto n, r[1000];
	register i, t;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", r+i);
	qsort(r, n, sizeof(r[0]), desc);
	t = 0;
	for (i = 0; i < n; i++)
		t += (i & 1) ? -r[i]*r[i] : r[i]*r[i];
	printf("%.9f\n", t * 3.141592653589793238);
}
