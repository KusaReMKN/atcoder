main()
{
	int a, b, c, t;

	scanf("%d%d%d", &a, &b, &c);
	t = c - (a - b);
	printf("%d\n", t < 0 ? 0 : t);
}
