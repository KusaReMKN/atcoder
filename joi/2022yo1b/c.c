#include <stdio.h>

int
main(void)
{
	char s[101];

	scanf("%*d%s", s);
	for (int i = 1; s[i]; i++)
		if (s[i] == 'J')
			printf("%c\n", s[i-1]);

	return 0;
}
