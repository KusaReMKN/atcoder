#include <stdio.h>

int
main(void)
{
	int a, b;

	scanf("%d%d", &a, &b);
	if (a <= 0 && 0 <= b)
		return puts("Zero"), 0;
	if (a < 0 && b < 0)
		return puts(b-a & 1 ? "Positive" : "Negative"), 0;
	puts("Positive");

	return 0;
}
