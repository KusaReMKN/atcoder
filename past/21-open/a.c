#include <stdio.h>

int
main(void)
{
	int x;

	scanf("%d", &x);
	printf("%02d:%02d\n", x > 0 ? 11 : 12, (60 - x) % 60);

	return 0;
}
