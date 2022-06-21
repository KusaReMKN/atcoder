#include <stdio.h>
#include <ctype.h>

int
main(void)
{
	char s, t;

	scanf("%c %c", &s, &t);
	printf("%c\n", (s == 'Y' ? toupper : tolower)(t));

	return 0;
}
