main()
{
	int k, x;
	int i, head;

	scanf("%d%d", &k, &x);
	head = 0;
	for (i = -1000000; i <= 1000000; i++)
		if (x - k < i && i < x + k)
			printf("%s%d", head++ ? " " : "", i);
	printf("\n");
}
