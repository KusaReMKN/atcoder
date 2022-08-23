#include <stdio.h>
#include <string.h>

static int
f(const char *s, const char *t)
{
	if (t[0] == '\0' || s[1] == '\0' && t[1] == '\0' && s[0] == t[0])
		return 0;
	if (s[0] != '\0' && s[1] == '\0' && s[0] == t[0])
		return 2;
	return 1;
}

int
main(void)
{
	char s[200001];
	char *p, t[3] = { 0 };
	int i, n;

	gets(s);
	p = s;
	for (i = 0; (n = f(t, p)) != 0; i++) {
		strncpy(t, p, n);
		t[n] = 0;
		p += n;
	}
	printf("%d\n", i);

	return 0;
}
