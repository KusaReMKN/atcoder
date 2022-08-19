#include <stdio.h>

int
main(void)
{
	int n, c, a[4];
	int max, min;

	scanf("%d", &n);
	a[0] = a[1] = a[2] = a[3] = 0;
	for (int i = 0; i < n; i++) {
		scanf("%1d", &c);
		a[c-1]++;
	}
	max = 0;
	min = n;
	for (int i = 0; i < 4; i++) {
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}
	printf("%d %d\n", max, min);

	return 0;
}
