main()
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	if (a <= c && c <= b)
		puts("Yes");
	else
		puts("No");
}
