#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[300001];

	scanf("%s", s);
	for (int i = 0; s[i] != '\0'; i++)
		if (strncmp(s+i, "WA", 2) == 0) {
			s[i+0] = 'A';
			s[i+1] = 'C';
			if (i > 0)
				i -= 2;
		}
	puts(s);

	return 0;
}
