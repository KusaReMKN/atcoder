#include <stdio.h>

int
main(void)
{
	int n, k;
	int a;

	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a == k) {
			printf("%d\n", i+1);
			return 0;
		}
	}
	printf("%d\n", -1);

	return 0;
}
