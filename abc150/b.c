#include <stdio.h>
#include <string.h>

int main()
{
	char s[100] = { 0 };
	char *p;
	int i = 0;

	scanf("%*d%s", s);
	for (p = s - 1; p; i++)
		p = strstr(++p, "ABC");
	printf("%d\n", i - 1);

	return 0;
}
