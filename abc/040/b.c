main()
{
	auto n;
	register h, w, hmax, min;
	extern double floor(), sqrt();

	scanf("%d", &n);
	hmax = floor(sqrt((double)n));
	min = 99999;
	for (h = 1; h <= hmax; h++) {
		w = n / h;
		if (n/h - h + n - h*w < min)
			min = n/h - h + n - h*w;
	}
	printf("%d\n", min);
}
