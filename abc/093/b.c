main()
{
	auto a, b, k;
	register i;

	scanf("%d%d%d", &a, &b, &k);
#define min(a, b) ((a) < (b) ? (a) : (b))
	for (i = a; i < min(a+k, b+1); i++)
		printf("%d\n", i);
#define max(a, b) ((a) > (b) ? (a) : (b))
	for (i = max(b-k+1, a+k); i <= b; i++)
		printf("%d\n", i);
}
