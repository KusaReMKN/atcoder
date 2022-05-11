main()
{
	auto n, h;
	register i, cnt, max;

	scanf("%d", &n);
	cnt = max = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &h);
		if (max <= h)
			max = h, cnt++;
	}
	printf("%d\n", cnt);
}
