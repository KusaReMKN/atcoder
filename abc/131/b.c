main()
{
	int n, l;
	int i, sum, mini;
	unsigned min;

	scanf("%d%d", &n, &l);
	sum = 0;
	min = -1;
	for (i = 0; i < n; i++) {
		sum += l + i;
		if (min > abs(l+i))
			min = abs(l + (mini=i));
	}
	sum -= l + mini;
	printf("%d\n", sum);
}
