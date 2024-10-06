#include <stdio.h>

int
main(void)
{
	char s[101], t[101];

	scanf("%s%s", s, t);
	for (int i = 0; s[i] != '\0' || t[i] != '\0'; i++)
		if (s[i] != t[i]) {
			printf("%d\n", i+1);
			return 0;
		}
	puts("0");

	return 0;
}
