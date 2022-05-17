main()
{
	auto n, m, x, a;
	register i, toll0, tolln;

	scanf("%d%d%d", &n, &m, &x);
	toll0 = tolln = 0;
	for (i = 0; i < m; i++) {
		scanf("%d", &a);
		if (a < x)
			toll0++;
		if (x < a)
			tolln++;
	}
	printf("%d\n", toll0 < tolln ? toll0 : tolln);
}
