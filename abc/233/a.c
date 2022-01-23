main()
{
	int x, y, i;

	scanf("%d%d", &x, &y);
	for (i = 0; x < y; i++)
		x += 10;
	printf("%d\n", i);
}
