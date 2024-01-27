#include <ctype.h>
#include <stdio.h>

int
main(void)
{
	char s[101];
	int yes;

	(void)scanf("%s", s);
	yes = !!isupper(s[0]);
	for (int i = 1; s[i] != '\0'; i++)
		yes &= !!islower(s[i]);
	puts(yes ? "Yes" : "No");

	return 0;
}
