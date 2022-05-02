main()
{
	int n, a[20], b[20], c[20];
	int i, last, sum;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	for (i = 0; i < n; i++)
		scanf("%d", b + i);
	for (i = 0; i < n-1; i++)
		scanf("%d", c + i);
	last = -1;
	sum = 0;
	for (i = 0; i < n; i++) {
		sum += b[a[i]-1];
		if (last + 1 == a[i])
			sum += c[last-1];
		last = a[i];
	}
	printf("%d\n", sum);
}
