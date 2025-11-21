#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int
compar(const void *a, const void *b)
{
	return *(const char *)a - *(const char *)b;
}

int
main(void)
{
	char s[10];
	char *p, t;

	scanf("%s", s);
	qsort(s, strlen(s), 1, compar);
	if (s[0] == '0') {
		p = strpbrk(s, "1234567879");
		s[0] = *p;
		*p = '0';
	}
	puts(s);

	return 0;
}
