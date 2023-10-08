#include <stdio.h>

int
main(void)
{
	char s[17];

	scanf("%s", s);
	for (int i = 1; i <= 15; i += 2)
		if (s[i] != '0') {
			puts("No");
			return 0;
		}
	puts("Yes");

	return 0;
}
