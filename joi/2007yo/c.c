#include <stdio.h>

int
main(void)
{
	char s[1001];
	char tab[] = "XYZABCDEFGHIJKLMNOPQRSTUVW";

	scanf("%s", s);
	for (int i = 0; s[i] != '\0'; i++)
		putchar(tab[s[i]-'A']);
	putchar('\n');

	return 0;
}
