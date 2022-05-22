main()
{
	auto n, a[100000];
	auto p[100000];
	register i, c;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		p[i] = 0, scanf("%d", a+i);
	c = i = 0;
	while (!p[i])
		if (i == 1)
			break;
		else
			p[i] = ++c, i = a[i] - 1;
	printf("%d\n", i == 1 ? c : -1);
}
