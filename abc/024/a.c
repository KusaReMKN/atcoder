main()
{
	int a, b, c, k, s, t;

	scanf("%d%d%d%d%d%d", &a, &b, &c, &k, &s, &t);
	if (s + t >= k)
		a -= c, b -= c;
	printf("%d\n", a * s + b * t);
}
