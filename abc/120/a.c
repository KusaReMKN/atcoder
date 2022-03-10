#define MIN(a, b) ((a) < (b) ? (a) : (b))
main()
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	printf("%d\n", MIN(b / a, c));
}
