main()
{
	int n, k, x, y, i, s;

	scanf("%d%d%d%d", &n, &k, &x, &y);
	s = 0;
	for (i = 0; i < n; i++)
		s += i < k ? x : y;
	printf("%d\n", s);
}
