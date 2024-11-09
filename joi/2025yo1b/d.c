#include <stdio.h>
#include <string.h>

int
main(void)
{
	int n;
	int a[10], b[10];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	while (--n > 0) {
		for (int i = 0; i < n; i++) {
			b[i] = a[i+0] + a[i+1];
			printf("%s%d", i > 0 ? " " : "", b[i]);
		}
		printf("\n");
		memcpy(a, b, sizeof(a[0])*n);
	}

	return 0;
}
