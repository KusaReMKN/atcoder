main()
{
	int a, b, c, d;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a < c)
		return puts("Takahashi"), 0;
	if (a > c)
		return puts("Aoki"), 0;
	if (b > d)
		return puts("Aoki"), 0;
	else
		return puts("Takahashi"), 0;
}
