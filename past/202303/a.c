#include <stdio.h>

int
main(void)
{
	int n, s, t;

	scanf("%d%d%d", &n, &s, &t);
	puts((n & 1) == (s ^ t) ? "Bob" : "Alice");

	return 0;
}
