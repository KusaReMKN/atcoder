main()
{
	int a, b;

	scanf("%d%d", &a, &b);
	if (a % 3 && b % 3 && (a+b) % 3)
		puts("Impossible");
	else
		puts("Possible");
}
