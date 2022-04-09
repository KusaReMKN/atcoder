main()
{
	int n, d;
	int i;

	scanf("%d%d", &n, &d);
	for (i = 1; (n -= d * 2 + 1) > 0; i++);
	printf("%d\n", i);
}
