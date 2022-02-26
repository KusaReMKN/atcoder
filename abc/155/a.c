main()
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	if (a == b && a != c || a == c && a != b || b == c && b != a)
		puts("Yes");
	else
		puts("No");
}
