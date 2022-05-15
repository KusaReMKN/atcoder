main()
{
	auto n;
	register i, j;

	scanf("%d", &n);
	for (i = 0; i*4 <= n; i++)
		for (j = 0; i*4+j*7 <= n; j++)
			if (i*4+j*7 == n)
				return puts("Yes"), 0;
	puts("No");
}
