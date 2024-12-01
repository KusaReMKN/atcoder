#include <stdio.h>
#include <string.h>

int
main(void)
{
	int n, d;
	char s[101];

	scanf("%d%d%s", &n, &d, s);
	while (d-- > 0)
		*strrchr(s, '@') = '.';
	puts(s);

	return 0;
}
