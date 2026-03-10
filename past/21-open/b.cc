#include <ctype.h>
#include <stdio.h>

int
main(void)
{
	char s[101];
	char l[101], u[101];
	int lp, up;

	scanf("%s", s);
	lp = up = 0;
	for (int i = 0; s[i] != '\0'; i++)
		if (isupper(s[i]))
			u[up++] = s[i];
		else
			l[lp++] = s[i];
	u[up] = l[lp] = '\0';
	puts(u);
	puts(l);

	return 0;
}
