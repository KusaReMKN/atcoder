#include <stdio.h>
#include <string.h>

int
main(void)
{
	char c1[2], c2[2], s[101];

	scanf("%*d%s%s%s", c1, c2, s);
	for (int i = 0; s[i] != '\0'; i++)
		if (s[i] != c1[0])
			s[i] = c2[0];
	puts(s);

	return 0;
}
