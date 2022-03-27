main()
{
	int a[1000], b, i, j, n;
	int s1, s2;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	s1 = s2 = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &b);
		for (j = 0; j < n; j++)
			if (a[j] == b)
				if (j == i)
					s1++;
				else
					s2++;
	}
	printf("%d\n%d\n", s1, s2);
}
