main()
{
	int n, k, h;
	int i, sum;

	scanf("%d%d", &n, &k);
	sum = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &h);
		if (k <= h)
			sum++;
	}
	printf("%d\n", sum);
}
