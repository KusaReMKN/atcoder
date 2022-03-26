#include <stdio.h>

int main(void)
{
	int n, x, a, i;
	int first = 1;

	scanf("%d%d", &n, &x);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		if (x != a) {
			if (!first) putchar(' ');
			first = 0;
			printf("%d", a);
		}
	}
	putchar('\n');
	return 0;
}
