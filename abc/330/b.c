#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int
main(void)
{
	int n, l, r, a;

	scanf("%d%d%d", &n, &l, &r);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		printf("%s%d", i ? " " : "", MIN(MAX(l, a), r));
	}
	printf("\n");

	return 0;
}
