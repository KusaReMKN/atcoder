main()
{
	int a, b;

	scanf("%d%d", &a, &b);
	if (b - a == 1 || b - a == 9)
		puts("Yes");
	else
		puts("No");
}
