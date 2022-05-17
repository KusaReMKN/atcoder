main()
{
	auto n, d, x, a;
	register i, j, chocolate;

	scanf("%d%d%d", &n, &d, &x);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		for (j = 0; j * a + 1 <= d; j++)
			x++;
	}
	printf("%d\n", x);
}
