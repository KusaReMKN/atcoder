#include <stdio.h>

int
main(void)
{
	int n;

	scanf("%d", &n);
	while (n > 0) {
		printf("%d", n);
		if (--n > 0)
			printf(",");
	}
	printf("\n");

	return 0;
}
