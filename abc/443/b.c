#include <stdio.h>

int
main(void)
{
	int n, k;

	scanf("%d%d", &n, &k);
	for (int i = 0; ; i++) {
		k -= n++;
		if (k <= 0) {
			printf("%d\n", i);
			break;
		}
	}

	return 0;
}
