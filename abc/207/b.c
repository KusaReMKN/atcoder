main()
{
	int a, b, c, d;
	extern double ceil();

	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (b >= c * d)
		return puts("-1"), 0;
	printf("%.0f", ceil((double)a/((double)c*d-b)));
}
