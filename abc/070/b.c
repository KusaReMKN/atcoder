main()
{
	auto a, b, c, d;
	register t;

	scanf("%d%d%d%d", &a, &b, &c, &d);
#define max(x, y) (x > y ? x : y)
#define min(x, y) (x < y ? x : y)
	t = min(b, d) - max(a, c);
	printf("%d\n", t > 0 ? t : 0);
}
