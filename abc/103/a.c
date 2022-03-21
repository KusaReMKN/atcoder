main()
{
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX3(a, b, c) MAX(a, MAX(b, c))
#define MIN3(a, b, c) MIN(a, MIN(b, c))
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	printf("%d\n", MAX3(a, b, c) - MIN3(a, b, c));
}
