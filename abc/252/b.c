main()
{
	auto n, k, a[100], b;
	register i, max;

	scanf("%d%d", &n, &k);
	max = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", a + i);
		if (max < a[i])
			max = a[i];
	}
	for (i = 0; i < k; i++) {
		scanf("%d", &b);
		if (a[b-1] == max)
			return puts("Yes"), 0;
	}
	puts("No");
}
