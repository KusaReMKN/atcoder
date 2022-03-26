#include <stdio.h>

#define max(a, b) ((a) < (b) ? (b) : (a))
#define min(a, b) ((a) > (b) ? (b) : (a))

int main(void)
{
	int x, y;

	scanf("%d%d", &x, &y);
	if (min(x, y) + 3 > max(x, y)) return puts("Yes"), 0;
	puts("No");

	return 0;
}
