#include <stdio.h>

int
main(void)
{
	int l, r, d;

	scanf("%d%d%d", &l, &r, &d);
	printf("%d\n", r/d - (l-1)/d);

	return 0;
}
