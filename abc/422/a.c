#include <stdio.h>

int
main(void)
{
	int a, b;

	scanf("%d-%d", &a, &b);
	if (++b > 8) {
		a++;
		b = 1;
	}
	printf("%d-%d\n", a, b);

	return 0;
}
