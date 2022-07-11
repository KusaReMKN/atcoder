#include <stdio.h>

int
main(void)
{
	int n, p;
	int min, k;

	scanf("%d", &n);
	min = 999999;
	k = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &p);
		if (min > p)
			min = p, k++;
	}
	printf("%d\n", k);

	return 0;
}
