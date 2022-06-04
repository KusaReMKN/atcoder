main()
{
	auto a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	if (a+b == c && a-b == c)
		puts("?");
	else if (a+b == c)
		puts("+");
	else if (a-b == c)
		puts("-");
	else
		puts("!");
}
