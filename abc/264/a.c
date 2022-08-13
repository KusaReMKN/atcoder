#include <stdio.h>

int
main(void)
{
	int l, r;
	char s[] = "atcoder";

	scanf("%d%d", &l, &r);
	s[r] = 0;
	puts(s + l-1);

	return 0;
}
