#include <stdio.h>

int
main(void)
{
	int w, b;

	scanf("%d%d", &w, &b);
	w *= 1000;
	printf("%d\n", w/b + 1);

	return 0;
}
