#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[128];
	int l;

	scanf("%s", s);
	l = strlen(s);

	for (; l > 0; l--)
	{
		putchar('x');
	}

	putchar('\n');
	return 0;
}
