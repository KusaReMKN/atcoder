#include <ctype.h>
#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[100001], t[4];
	char *sp, *tp;

	scanf("%s%s", s, t);

	if (t[2] == 'X')
		goto xskip;
	sp = strrchr(s, tolower(t[2]));
	if (sp == NULL)
		return puts("No"), 0;
	*sp = '\0';
xskip:
	sp = strrchr(s, tolower(t[1]));
	if (sp == NULL)
		return puts("No"), 0;
	*sp = '\0';

	sp = strrchr(s, tolower(t[0]));
	if (sp == NULL)
		return puts("No"), 0;
	puts("Yes");

	return 0;
}
