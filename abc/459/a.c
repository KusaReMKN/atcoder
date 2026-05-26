#include <stdio.h>

int
main(void)
{
	char s[] = "HelloWorld";
	int x;

	scanf("%d", &x);
	s[x-1] = '\0';
	printf("%s%s\n", s, s+x);

	return 0;
}
