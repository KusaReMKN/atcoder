main()
{
	int n, i;
	double x, manhattan, euclidian, chebyshev;
	extern double fabs(), pow(), sqrt();

	scanf("%d", &n);
	manhattan = euclidian = chebyshev = 0.0;
	for (i = 0; i < n; i++) {
		scanf("%lf", &x);
		manhattan += fabs(x);
		euclidian += pow(fabs(x), 2.0);
		if (chebyshev < fabs(x))
			chebyshev = fabs(x);
	}
	euclidian = sqrt(euclidian);
	printf("%10.10f\n%10.10f\n%10.10f\n",
			manhattan, euclidian, chebyshev);
}
