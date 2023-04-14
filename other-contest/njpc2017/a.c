#include <stdio.h>

int
main(void)
{
	int l;
	char s[100001];

	scanf("%d%s", &l, s);
	s[l] = 0;
	puts(s);

	return 0;
}
