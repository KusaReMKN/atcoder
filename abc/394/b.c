#include <stdio.h>
#include <string.h>

static int
compar(const void *a, const void *b)
{
	return (int)strlen(*(char (*)[51])a) - (int)strlen(*(char (*)[51])b);
}

int
main(void)
{
	int n;
	scanf("%d", &n);

	char s[50][51];
	for (int i = 0; i < n; i++)
		scanf("%s", s[i]);
	qsort(s, n, sizeof(s[0]), compar);

	for (int i = 0; i < n; i++)
		printf("%s", s[i]);
	printf("\n");

	return 0;
}
