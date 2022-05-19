main()
{
	auto n;
	register i;
	register long long li, li1, li2;

	scanf("%d", &n);
	li2 = 2, li1 = 1;
	if (n == 1)
		li = li1;
	for (i = 2; i <= n; i++)
		li = li1 + li2, li2 = li1, li1 = li;
	printf("%lld\n", li);
}
