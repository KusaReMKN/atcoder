#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t
f(int n, char *s)
{
	size_t p, r;

	if (strtoul(s, NULL, 10) > n)
		return 0;
	r = strchr(s, '7') && strchr(s, '5') && strchr(s, '3');
	p = strlen(s);
	s[p] = '7', s[p+1] = '\0';
	r += f(n, s);
	s[p] = '5', s[p+1] = '\0';
	r += f(n, s);
	s[p] = '3', s[p+1] = '\0';
	r += f(n, s);

	return r;
}

int
main(void)
{
	int n;
	char s[16];

	scanf("%d", &n);
	memset(s, 0, sizeof(s));
	printf("%zd\n", f(n, s));

	return 0;
}
