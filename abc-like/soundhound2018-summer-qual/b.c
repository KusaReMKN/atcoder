#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[1001];
	int w;

	scanf("%s%d", s, &w);
	for (int i = 0; i < strlen(s); i += w)
		putchar(s[i]);
	putchar('\n');

	return 0;
}
