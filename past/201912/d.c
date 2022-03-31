main()
{
	int i, n, t, a[200000] = { 0 };
	int x, y;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &t), a[t-1]++;
	x = y = -1;
	for (i = 0; i < n; i++) {
		if (a[i] == 0)
			x = i + 1;
		if (a[i] == 2)
			y = i + 1;
	}
	if (x == -1)
		puts("Correct");
	else
		printf("%d %d\n", y, x);
}
