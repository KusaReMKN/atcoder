#include <stdio.h>

int
main(void)
{
	int c;

	c = getchar();
	puts(c == 'K' || c == 'O' || c == 'L' || c == 'P' ? "Right" : "Left");

	return 0;
}
