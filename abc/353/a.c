#include <stdio.h>

int
main(void)
{
	int n;
	scanf("%d", &n);

	int h1;
	scanf("%d", &h1);

	for (int i = 1; i < n; i++) {
		int h;
		scanf("%d", &h);
		if (h1 < h) {
			printf("%d\n", i+1);
			return 0;
		}
	}
	printf("-1\n");

	return 0;
}
