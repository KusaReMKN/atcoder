#include <stdio.h>

int
main(void)
{
	int v[256] = { 0 };
	char s[26];

	scanf("%s", s);
	for (int i = 0; s[i] != '\0'; i++)
		v[s[i]]++;
	for (int i = 'a'; ; i++)
		if (v[i] == 0) {
			printf("%c\n", i);
			break;
		}

	return 0;
}
