#include <stdio.h>

int main(void)
{
	char s[8] = { 0 };

	fgets(s, 8, stdin);
	s[3] = s[0];
	s[4] = 0;
	puts(s + 1);

	return 0;
}
