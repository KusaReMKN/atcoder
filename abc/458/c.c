#include <sys/param.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[500001];
	scanf("%s", s);

	size_t l = strlen(s);

	size_t cnt = 0;
	for (char *p = strchr(s, 'C'); p != NULL; p = strchr(p+1, 'C')) {
		ptrdiff_t h = p - s + 1;
		ptrdiff_t t = s+l - p;
		cnt += MIN(h, t);
	}
	printf("%zu\n", cnt);

	return 0;
}
