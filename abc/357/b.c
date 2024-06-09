#include <ctype.h>
#include <stdio.h>

int
main(void)
{
	char s[100];
	int l, u;

	scanf("%s", s);
	l = u = 0;
	for (int i = 0; s[i] != '\0'; i++)
		if (islower(s[i]))
			l++;
		else
			u++;
	for (int i = 0; s[i] != '\0'; i++)
		putchar((l < u ? toupper : tolower)(s[i]));
	putchar('\n');

	return 0;
}
