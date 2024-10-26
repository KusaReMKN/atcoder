#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int
compar(const void *a, const void *b)
{
	return *(char *)a - *(char *)b;
}

int
main(void)
{
	char s[4];
	scanf("%s", s);
	qsort(s, 3, 1, compar);
	puts(strcmp(s, "ABC") == 0 ? "Yes" : "No");

	return 0;
}
