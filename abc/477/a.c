#include <stddef.h>
#include <stdio.h>
#include <string.h>

int
main(void)
{
	int c;
	const char *str = "BYR";

	c = getchar();
	printf("%c\n", "YRB"[(ptrdiff_t)(strchr(str, c) - str)]);

	return 0;
}
