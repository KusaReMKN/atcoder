main()
{
	auto n, T, c, t;
	register minc, i;

	scanf("%d%d", &n, &T);
	minc = 9999;
	for (i = 0; i < n; i++) {
		scanf("%d%d", &c, &t);
		if (t <= T && c < minc)
			minc = c;
	}
	if (minc == 9999)
		puts("TLE");
	else
		printf("%d\n", minc);
}
