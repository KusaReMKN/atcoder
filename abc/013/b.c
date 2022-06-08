main()
{
	auto a, b;
	register i, n, m;

	scanf("%d%d", &a, &b);
	n = 0;
	for (i = a; i % 10 != b; i++)
		n++;
	m = 0;
	for (i = 10 + a; i % 10 != b; i--)
		m++;
	printf("%d\n", n < m ? n : m);
}
