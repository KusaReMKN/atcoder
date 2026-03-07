#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int
main(void)
{
	int n;

	scanf("%d", &n);
	printf("%d\n", MAX(n-3, 0));

	return 0;
}
