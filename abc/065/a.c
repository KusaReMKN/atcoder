main()
{
	int x, a, b;

	scanf("%d%d%d", &x, &a, &b);
	if (b <= a)
		puts("delicious");
	else if (b - a <= x)
		puts("safe");
	else
		puts("dangerous");
}
