main()
{
	auto n;
	auto long a;
	register i;
	register long max, min;

	scanf("%d", &n);
	max = 0;
	min = 999999999l;
	for (i = 0; i < n; i++) {
		scanf("%ld", &a);
		if (max < a)
			max = a;
		if (a < min)
			min = a;
	}
	printf("%ld\n", max - min);
}
