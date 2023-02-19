#include <ctype.h>
#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[4], t[4];

	scanf("%s%s", &s, &t);
	if (strcmp(s, t) == 0) {
		puts("same");
	} else {
		for (int i = 0; i < 3; i++)
			s[i] = tolower(s[i]), t[i] = tolower(t[i]);
		if (strcmp(s, t) == 0)
			puts("case-insensitive");
		else
			puts("different");
	}

	return 0;
}
