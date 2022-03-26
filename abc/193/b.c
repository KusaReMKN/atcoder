#include <stdio.h>

#define MAX (1<<30)

int main(void)
{
	int i, n, a, p, x;
	int min = MAX;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d%d", &a, &p, &x);
		if (x - a > 0 && min > p) min = p;
	}
	if (min == MAX) return puts("-1"), 0;
	return printf("%d\n", min), 0;
}
