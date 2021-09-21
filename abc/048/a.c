#include <stdio.h>

int main(void)
{
	char s[101];

	scanf("%*s%s%*s", s);
	printf("A%cC\n", s[0]);

	return 0;
}
