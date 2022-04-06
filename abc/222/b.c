main()
{
	int n, p, a;
	int i, fail;

	scanf("%d%d", &n, &p);
	fail = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a < p)
			fail++;
	}
	printf("%d\n", fail);
}
