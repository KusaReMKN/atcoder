main()
{
	auto n, w[101];
	register i, t, m, s1, s2;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", w+i);
	m = 99999;
	for (t = 1; t < n-1; t++) {
		s1 = s2 = 0;
		for (i = 0; i < n; i++)
			if (i <= t)
				s1 += w[i];
			else
				s2 += w[i];
		if (m > abs(s1-s2))
			m = abs(s1-s2);
	}
	printf("%d\n", m);
}
