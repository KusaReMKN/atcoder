main()
{
	int n, i, a, s;

	scanf("%d", &n);
	s = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		while (a % 2 == 0 || a % 3 == 2)
			a--, s++;
	}
	printf("%d\n", s);
}
