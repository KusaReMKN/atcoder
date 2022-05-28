main()
{
	auto a, b, c;
	register t;

	scanf("%d%d%d", &a, &b, &c);
	if (a > c) {
		t = a;
		a = c;
		c = t;
	}
	if (a <= b && b <= c && a <= c)
		printf("Yes");
	else
		printf("No");
}
