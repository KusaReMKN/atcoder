#include <ctype.h>
#include <stdio.h>

int
main(void)
{
	char s[16], *p;

	scanf("%s", s);
	p = NULL;
	for (int i = 0; s[i]; i++) {
		if (p != NULL && !isdigit(s[i])) {
			s[i] = '\0';
		}
		if (p == NULL && isdigit(s[i]))
			p = &s[i];
	}
	puts(p);

	return 0;
}
