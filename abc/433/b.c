#include <stdio.h>

int
main(void)
{
	int n, k;
	int a[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < n; i++) {
		k = -1;
		for (int j = i-1; j > 0; j--)
			if (a[j] > a[i]) {
				k = j;
				break;
			}
		printf("%d\n", k);
	}

	return 0;
}
