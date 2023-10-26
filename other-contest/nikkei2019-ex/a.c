#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[100001];
	size_t l;

	scanf("%s", s);
	l = strlen(s);
	for (size_t i = 0; i < l; i++)
		printf("%d\n", (int)i+1);

	return 0;
}
