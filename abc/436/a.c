#include <stdio.h>
#include <string.h>

int
main(void)
{
	int n;
	char s[101];

	scanf("%d%s", &n, s);
	for (int i = 0; i < n-strlen(s); i++)
		putchar('o');
	puts(s);

	return 0;
}
