main()
{
	int x, y;

	scanf("%d.%d", &x, &y);
	printf("%d%s\n", x, y <= 2 ? "-" : y <= 6 ? "" : "+");
}
