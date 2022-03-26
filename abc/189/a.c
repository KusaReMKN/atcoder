#include <stdio.h>

int main(void)
{
	int c, i;

	c = getchar();
	if (c != getchar()) return puts("Lost"), 0;
	if (c != getchar()) return puts("Lost"), 0;
	return puts("Won"), 0;
}
