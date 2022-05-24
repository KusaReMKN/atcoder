main()
{
	auto n, k, x;
	register i, c;

	scanf("%d%d", &n, &k);
	c = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &x);
#define min(a, b) (a < b ? a : b)
		c += min(abs(k-x), x);
	}
	printf("%d\n", c + c);
}
