#include <stdio.h>

#define MIN(a, b)	((a) < (b) ? (a) : (b))
#define MAX(a, b)	((a) > (b) ? (a) : (b))

int
main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	printf("%d\n%d\n", MAX(a+b, a-b), MIN(a+b, a-b));

	return 0;
}
