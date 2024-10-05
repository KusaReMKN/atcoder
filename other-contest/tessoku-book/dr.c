#include <stdio.h>

int
main(void)
{
	long a, b, c;

	scanf("%ld%ld%ld", &a, &b, &c);
	puts(a+b+c == 0 ? "Yes" : "No");

	return 0;
}
