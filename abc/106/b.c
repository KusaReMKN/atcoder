divisor(n)
{
	register i, res;

	res = 0;
	for (i = 1; i <= n; i++)
		if (n % i == 0)
			res++;

	return res;
}

main()
{
	auto n;
	register i, cnt;

	scanf("%d", &n);
	cnt = 0;
	for (i = 1; i <= n; i += 2)
		if (divisor(i) == 8)
			cnt++;
	printf("%d\n", cnt);
}
