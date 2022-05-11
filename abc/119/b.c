main()
{
	auto n;
	double x;
	char u[4];
	double sum;
	register i;

	scanf("%d", &n);
	sum = 0.0;
	for (i = 0; i < n; i++) {
		scanf("%lf%s", &x, u);
		if (u[0] == 'J')
			sum += x;
		else
			sum += x * 380000;
	}
	printf("%f\n", sum);
}
