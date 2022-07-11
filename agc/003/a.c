#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[1001];

	gets(s);
	if (!!strchr(s, 'S') ^ !!strchr(s, 'N'))
		puts("No");
	else if (!!strchr(s, 'E') ^ !!strchr(s, 'W'))
		puts("No");
	else
		puts("Yes");

	return 0;
}
