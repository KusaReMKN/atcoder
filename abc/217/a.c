#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[11], t[11];

	scanf("%s%s", s, t);
	puts(strcmp(s, t) < 0 ? "Yes" : "No");

	return 0;
}
