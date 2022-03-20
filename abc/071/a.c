main()
{
	int x, a, b;

	scanf("%d%d%d", &x, &a, &b);
	if (abs(a - x) < abs(b - x))
		puts("A");
	else
		puts("B");
}
