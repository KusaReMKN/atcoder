main()
{
	int n, p;
	int i, sum, max;

	scanf("%d", &n);
	max = sum = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &p);
		if (max < p) {
			sum += max;
			max = p;
		} else {
			sum += p;
		}
	}
	sum += max / 2;
	printf("%d\n", sum);
}
