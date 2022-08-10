#include <stdio.h>

static int
diff(const char *s, const char *t)
{
	int w;

	w = 0;
	while (*s)
		if (*s++ != *t++)
			w++;

	return w;
}

int
main(void)
{
	char s[17];

	gets(s);
	printf("%d\n", diff(s, "CODEFESTIVAL2016"));

	return 0;
}
