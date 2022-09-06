#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int
main(void)
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	puts(MIN(a, b) < c && c < MAX(a, b) ? "Yes" : "No");

	return 0;
}
