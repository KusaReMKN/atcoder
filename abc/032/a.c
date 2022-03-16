main()
{
	int a, b, n, i;

	scanf("%d%d%d", &a, &b, &n);
	for (i = 0;; i++)
		if (i % a == 0 && i % b == 0 && i >= n)
			break;
	printf("%d\n", i);
}
