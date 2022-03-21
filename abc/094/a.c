main()
{
	int a, b, x;

	scanf("%d%d%d", &a, &b, &x);
	if (a > x || x > a + b)
		puts("NO");
	else
		puts("YES");
}
