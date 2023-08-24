#include <stdio.h>

int
main(void)
{
	char s[5];

	scanf("%s", s);
	if (s[0] == s[1] && s[2] == s[3] && s[0] != s[2])
		puts("Yes");
	else
		puts("No");

	return 0;
}
