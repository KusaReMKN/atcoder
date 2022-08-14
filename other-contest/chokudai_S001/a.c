#include <stdio.h>

int
main(void)
{
	int n, a;
	int max;

	scanf("%d", &n);
	max = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (max < a)
			max = a;
	}
	printf("%d\n", max);

	return 0;
}
