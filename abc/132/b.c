main()
{
#define two(p, pp, ppp) \
	(p < pp && pp < ppp || p > pp && pp > ppp)
	int n, p0, p1, p2;
	int i, res;

	scanf("%d", &n);
	scanf("%d%d%d", &p0, &p1, &p2);
	res = two(p0, p1, p2);
	for (i = 3; i < n; i++) {
		p0 = p1;
		p1 = p2;
		scanf("%d", &p2);
		res += two(p0, p1, p2);
	}
	printf("%d\n", res);
}
