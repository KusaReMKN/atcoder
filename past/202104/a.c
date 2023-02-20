#include <ctype.h>
#include <stdio.h>

int
main(void)
{
	char s[10];
	int yes;

	scanf("%s", &s);
	yes = 1;
	for (int i = 0; s[i] != '\0'; i++)
		if (i == 3) {
			if (s[i] != '-')
				yes = 0;
		} else {
			if (!isdigit(s[i]))
				yes = 0;
		}
	puts(yes ? "Yes" : "No");

	return 0;
}
