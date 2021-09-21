#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[101], b[101];

	scanf("%s%s", a, b);
	if (strlen(a) > strlen(b))
		puts("GREATER");
	else if (strlen(a) < strlen(b))
		puts("LESS");
	else if (strcmp(a, b) > 0)
		puts("GREATER");
	else if (strcmp(a, b) < 0)
		puts("LESS");
	else
		puts("EQUAL");

	return 0;
}
