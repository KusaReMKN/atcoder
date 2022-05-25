main()
{
	auto w, a, b;

	scanf("%d%d%d", &w, &a, &b);
#define max(a, b) ((a) > (b) ? (a) : (b))
	printf("%d\n", max(a-b, b-a) - w > 0 ? max(a-b, b-a) - w : 0);
}
