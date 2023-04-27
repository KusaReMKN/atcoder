#include <stdio.h>

int
main(void)
{
	int n;
	int c[30] = { 0 };

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		c[a]++;
	}
	for (int i = 0; i < 30; i++)
		printf("%s%d", i ? " " : "", c[i]);
	printf("\n");

	return 0;
}
