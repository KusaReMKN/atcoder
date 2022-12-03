#include <stdio.h>

int
main(void)
{
	char s[500001], t[500001];

	gets(s);
	gets(t);

	for (int i = 0; t[i]; i++)
		if (s[i] != t[i])
			return printf("%d\n", i+1), 0;

	return 0;
}
