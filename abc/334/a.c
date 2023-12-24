#include <stdio.h>

int
main(void)
{
	int b, g;

	scanf("%d%d", &b, &g);
	puts(b > g ? "Bat" : "Glove");

	return 0;
}
