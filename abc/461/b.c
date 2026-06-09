#include <stdio.h>

int
main(void)
{
	int n;
	int k[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		k[a-1] = i;
	}
	for (int i = 0; i < n; i++) {
		int b;
		scanf("%d", &b);
		if (k[i] != b-1)
			return puts("No"), 0;
	}
	puts("Yes");

	return 0;
}
