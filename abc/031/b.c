main()
{
	auto l, h, n, a;
	register i;

	scanf("%d%d%d", &l, &h, &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		if (l <= a && a <= h)
			puts("0");
		else if (h < a)
			puts("-1");
		else
			printf("%d\n", l - a);
	}
}
