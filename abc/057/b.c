main()
{
	auto n, m, w[50];
	long l[50];
	struct { long x, y; } s[50], c;
	register i, j, d;

	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%ld%ld", &s[i].x, &s[i].y),
		l[i] = 999999999L,
		w[i] = 0;
	for (i = 0; i < m; i++) {
		scanf("%ld%ld", &c.x, &c.y);
		for (j = 0; j < n; j++) {
			d = abs(c.x-s[j].x)+abs(c.y-s[j].y);
			if (d < l[j])
				l[j] = d, w[j] = i;
		}
	}
	for (i = 0; i < n; i++)
		printf("%d\n", w[i]+1);
}
