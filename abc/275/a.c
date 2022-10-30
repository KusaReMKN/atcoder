#include <stdio.h>

int
main(void)
{
	int n, h;
	int k, max;

	scanf("%d", &n);
	max = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &h);
		if (max < h)
			max = h, k = i;
	}
	printf("%d\n", k + 1);

	return 0;
}
