main()
{
	int n, a[100];
	int i, j, c, cnt, max;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	c = max = 0;
	for (i = 2; i < 1000; i++) {
		cnt = 0;
		for (j = 0; j < n; j++)
			if (a[j] % i == 0)
				cnt++;
		if (cnt > max)
			max = cnt, c = i;
	}
	printf("%d\n", c);
}
