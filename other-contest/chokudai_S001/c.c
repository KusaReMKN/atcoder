#include <stdio.h>

int
main(void)
{
	int n, a;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		printf("%s%d", i ? "," : "", a);
	}
	printf("\n");

	return 0;
}
