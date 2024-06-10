#include <stdio.h>

#define MAX(a, b)	((a) > (b) ? (a) : (b))

int
main(void)
{
	int a, a0;
	int b, b0;

	a = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &a0);
		a += a0;
	}

	b = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &b0);
		b += b0;
	}

	printf("%d\n", MAX(a, b));

	return 0;
}
