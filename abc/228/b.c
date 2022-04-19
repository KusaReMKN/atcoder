main()
{
	int n, x, a[100000];
	int i, s, known[100000] = { 0 };

	scanf("%d%d", &n, &x);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	known[x-1] = 1;
	for (x = a[x-1]; known[x-1] == 0; x = a[x-1])
		known[x-1] = 1;
	s = 0;
	for (i = 0; i < n; i++)
		if (known[i])
			s++;
	printf("%d\n", s);
}
