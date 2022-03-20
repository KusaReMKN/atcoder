main()
{
	int a, b, c, x;

	scanf("%d%d%d%d", &a, &b, &c, &x);
	if (x <= a)
		puts("1");
	else if (x <= b)
		printf("%f\n", (double)c / (b-a));
	else
		puts("0");
}
