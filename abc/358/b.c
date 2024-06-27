#include <stdio.h>

int
main(void)
{
	int n, a;
	scanf("%d%d", &n, &a);

	int cur = 0;
	for (int i = 0; i < n; i++) {
		int t;
		scanf("%d", &t);

#define MAX(a, b)	((a) > (b) ? (a) : (b))
		cur = MAX(cur, t) + a;
		printf("%d\n", cur);
	}

	return 0;
}
