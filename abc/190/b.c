#include <stdio.h>

int main(void)
{
	int n, s, d, x, y;
	int i;

	scanf("%d%d%d", &n, &s, &d);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &x, &y);
		if (x < s && y > d) return puts("Yes"), 0;
	}
	return puts("No"), 0;
}
