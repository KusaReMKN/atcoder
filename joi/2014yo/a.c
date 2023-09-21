#include <stdio.h>

int
main(void)
{
	int sum;

	sum = 0;
	for (int i = 0; i < 5; i++) {
		int p;
		scanf("%d", &p);
		sum += p > 40 ? p : 40;
	}
	printf("%d\n", sum/5);

	return 0;
}
