main()
{
#define MIN(a, b) ((a) < (b) ? (a) : (b))
	int a, b, c, d;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("%d\n", MIN(a, b) + MIN(c, d));
}
