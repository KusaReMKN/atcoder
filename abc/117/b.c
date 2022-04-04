main()
{
	int n, l;
	int i, sum, max;

	scanf("%d", &n);
	max = sum = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &l);
		if (max < l) {
			sum += max;
			max = l;
		} else {
			sum += l;
		}
	}
	puts(max < sum ? "Yes" : "No");
}
