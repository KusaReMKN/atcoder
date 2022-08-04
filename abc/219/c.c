#include <stdio.h>
#include <stdlib.h>

static char x[30];

static int
asc(const void *a, const void *b)
{
	const char *s = a, *t = b;

	while (*s == *t++)
		if (*s++ == '\0')
			return 0;
	if (*s * *(t-1) == 0)
		return *s - *(t-1);
	return (int)(strchr(x, *s) - strchr(x, *(t-1)));
}

int
main(void)
{
	int n;
	char s[50000][11];

	scanf("%s%d", x, &n);
	for (int i = 0; i < n; i++)
		scanf("%s", s[i]);
	qsort(s, n, sizeof(s[0]), asc);
	for (int i = 0; i < n; i++)
		puts(s[i]);

	return 0;
}
