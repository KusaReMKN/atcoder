#include <stdio.h>

int
main(void)
{
	int l, r;

	scanf("%d%d", &l, &r);
	if (!(l ^ r))
		puts("Invalid");
	else
		puts(l ? "Yes" : "No");

	return 0;
}
