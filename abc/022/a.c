main()
{
	int n, s, t, w, i, a, d;

	scanf("%d%d%d%d", &n, &s, &t, &w);
	d = 0;
	for (i = 1; i < n; i++) {
		if (s <= w && w <= t)
			d++;
		scanf("%d", &a);
		w += a;
	}
	if (s <= w && w <= t)
		d++;
	printf("%d\n", d);
}
