main()
{
	auto n, a;
	register i, max, min;

	scanf("%d", &n);
	max = 0, min = 1000;
	for (i = 0; i < n; i++)
		scanf("%d", &a),
		max = max < a ? a : max,
		min = a < min ? a : min;
	printf("%d\n", max - min);
}
