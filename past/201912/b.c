main()
{
	int i, n, p, a;

	scanf("%d%d", &n, &p);
	for (i = 1; i < n; i++) {
		scanf("%d", &a);
		if (p == a)
			puts("stay");
		else
			printf("%s %d\n", p > a ? "down" : "up", abs(p - a));
		p = a;
	}
}
