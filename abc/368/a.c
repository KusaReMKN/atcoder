#include <stdio.h>

int
main(void)
{
	int n, k;
	int a[100];

	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = n-k; i < n; i++)
		printf("%d ", a[i]);
	for (int i = 0; i < n-k; i++)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}
