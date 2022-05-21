main()
{
	auto n, k;
	register i, s;

	scanf("%d%d", &n, &k);
	s = 1;
	for (i = 0; i < n; i++)
		if (s < k)
			s *= 2;
		else
			s += k;
	printf("%d\n", s);
}
