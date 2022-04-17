comp(a, b)
	int *a, *b;
{
	return *a - *b;
}

main()
{
	int n, a[360] = { 0 };
	int i, now, max, tmp;

	scanf("%d", &n);
	now = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &tmp);
		now += tmp;
		now %= 360;
		a[i] = now;
	}
	qsort(a, n, sizeof(a[0]), comp);
	now = 0;
	max = 0;
	for (i = 0; i < n; i++) {
		if (a[i] - now > max)
			max = a[i] - now;
		now = a[i];
	}
	if (360 - now > max)
		max = 360 - now;
	printf("%d\n", max);
}
