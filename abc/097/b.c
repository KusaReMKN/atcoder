main()
{
	auto x;
	register i, j, m, r, t;
	extern double sqrt();

	scanf("%d", &x);
	r = 1;
	for (i = 2; i <= x; i++) {
		m = sqrt((double)i);
		for (j = 2; j <= m; j++) {
			t = i;
			while (t % j == 0)
				t /= j;
			if (t == 1) {
				r = i;
				break;
			}
		}
	}
	printf("%d\n", r);
}
