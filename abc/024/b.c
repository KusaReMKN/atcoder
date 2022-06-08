main()
{
	auto n, t, a, a1;
	register i, sum;

	scanf("%d%d%d", &n, &t, &a1);
	sum = 0;
	for (i = 1; i < n; i++) {
		scanf("%d", &a);
#define min(a, b) ((a) < (b) ? (a) : (b))
		sum += min(a-a1, t);
		a1 = a;
	}
	sum += t;
	printf("%d\n", sum);
}
