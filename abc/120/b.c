main()
{
	auto a, b, k;
	register i, cnt, min;

	scanf("%d%d%d", &a, &b, &k);
	min = a < b ? a : b;
	cnt = 0;
	for (i = min; cnt != k; i--)
		if (a % i == 0 && b % i == 0)
			cnt++;
	printf("%d\n", ++i);
}
