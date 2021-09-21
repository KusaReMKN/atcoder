#include <stdio.h>

int main(void)
{
	char s[101], t[101];
	int i;

	scanf("%*d%s%s", s, t);
	for (i = 0; s[i]; i++)
		printf("%c%c", s[i], t[i]);
	putchar('\n');

	return 0;
}
