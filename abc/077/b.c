main()
{
	auto n;
	register i;

	scanf("%d", &n);
	for (i = 0; i*i <= n; i++);
	i--;
	printf("%d\n", i*i);
}
