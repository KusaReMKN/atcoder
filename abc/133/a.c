main()
{
	int a, b, n;

	scanf("%d%d%d", &n, &a, &b);
	printf("%d\n", n * a < b ? n * a : b);
}
