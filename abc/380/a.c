#include <stdio.h>
#include <stdlib.h>

static int
compar(const void *a, const void *b)
{
	return *(char *)a - *(char *)b;
}


int
main(void)
{
	char n[7];

	scanf("%s", n);
	qsort(n, 6, 1, compar);
	puts(strcmp(n, "122333") == 0 ? "Yes" : "No");

	return 0;
}
