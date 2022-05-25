main()
{
	auto n;
	register i, r;

	scanf("%d", &n);
	r = 1;
	for (i = 1; i <= n; i++)
		r = (unsigned long long)r * i % 1000000007;
	printf("%d\n", r);
}
