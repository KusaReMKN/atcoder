main()
{
	int a, b;

	scanf("%d%d", &a, &b);
	printf("%d\n", a >= 13 ? b : a >= 6 ? b / 2 : 0);
}
