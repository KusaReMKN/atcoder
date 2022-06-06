main()
{
	auto n;
	auto a[1000000];
	register i;

	scanf("%d", &n);
	a[0] = a[1] = 0;
	a[2] = 1;
	for (i = 3; i < n; i++)
		a[i] = (a[i-1] + a[i-2] + a[i-3]) % 10007;
	printf("%d\n", a[n-1]);
}
