main()
{
	int i, n, s, a[200];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);

	for (s = 0; ; s++)
		for (i = 0; i < n; i++)
			if (a[i] & 1)
				goto quit;
			else
				a[i] >>= 1;
quit:
	printf("%d\n", s);
}
