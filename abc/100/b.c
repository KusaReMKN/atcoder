main()
{
	auto d, n;
	extern double pow();

	scanf("%d%d", &d, &n);
	if (n == 100)
		n++;
	printf("%.0f\n", n * pow(100.0, (double)d));
}
