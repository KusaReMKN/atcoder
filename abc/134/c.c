#include <stdio.h>

int
main(void)
{
	int n, a[200000];
	int max, max2;

	scanf("%d", &n);
	max = max2 = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (max < a[i])
			max2 = max, max = a[i];
		else if (max2 < a[i])
			max2 = a[i];
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", max == a[i] ? max2 : max);

	return 0;
}
