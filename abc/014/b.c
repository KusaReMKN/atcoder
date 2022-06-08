main()
{
	auto n, x, a;
	register i, sum;

	scanf("%d%d", &n, &x);
	sum = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		if (x & 1)
			sum += a;
		x >>= 1;
	}
	printf("%d\n", sum);
}
