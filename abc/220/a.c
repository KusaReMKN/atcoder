main()
{
	int a, b, c, i;

	scanf("%d%d%d", &a, &b, &c);
	for (i = 1; i <= 1000; i++)
		if (a <= i && i <= b && i % c == 0)
			break;
	printf("%d\n", i == 1001 ? -1 : i);
}
