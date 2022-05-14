main()
{
	auto n, m, X, Y, x, y;
	register i;

	scanf("%d%d%d%d", &n, &m, &X, &Y);
	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		if (X < x)
			X = x;
	}
	for (i = 0; i < m; i++) {
		scanf("%d", &y);
		if (Y > y)
			Y = y;
	}
	if (X < Y)
		printf("No ");
	puts("War");
}
