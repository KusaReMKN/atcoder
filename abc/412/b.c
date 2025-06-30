#include <ctype.h>
#include <stdio.h>

int
main(void)
{
	char s[101], t[101];
	char ct[256] = { 0 };

	scanf("%s%s", s, t);
	for (int i = 0; t[i] != '\0'; i++)
		ct[t[i]]++;
	for (int i = 1; s[i] != '\0'; i++)
		if (isupper(s[i-0]) && !ct[s[i-1]])
			return puts("No"), 0;
	puts("Yes");

	return 0;
}
