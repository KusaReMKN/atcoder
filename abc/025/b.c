main()
{
	auto n, a, b, d;
	char s[5];
	register i, cur;

	scanf("%d%d%d", &n, &a, &b);
	cur = 0;
	for (i = 0; i < n; i++) {
		scanf("%s%d", s, &d);
		if (d < a)
			d = a;
		if (d > b)
			d = b;
		if (s[0] == 'W')
			d *= -1;
		cur += d;
	}
	printf("%s%d\n",
			cur < 0 ? "West " : cur > 0 ? "East " : "",
			abs(cur));
}
