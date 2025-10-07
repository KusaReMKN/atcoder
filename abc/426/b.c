#include <stdio.h>

int
main(void)
{
	char s[11];
	int ch[256] = { 0 };

	scanf("%s", s);
	for (int i = 0; s[i] != '\0'; i++)
		ch[s[i]]++;
	for (int i = 0; i < 256; i++)
		if (ch[i] == 1)
			printf("%c\n", i);

	return 0;
}
