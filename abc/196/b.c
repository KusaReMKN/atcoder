#include <stdio.h>
#include <string.h>

int main(void)
{
	char x[1024] = { 0 };
	char *p;

	scanf("%s", x);
	if (p = strchr(x, '.')) *p = 0;
	puts(x);

	return 0;
}
