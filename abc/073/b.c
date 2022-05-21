main()
{
	auto n, l, r;
	register i, c;

	scanf("%d", &n);
	c = 0;
	for (i = 0; i < n; i++)
		scanf("%d%d", &l, &r), c += (r - l + 1);
	printf("%d\n", c);
}
