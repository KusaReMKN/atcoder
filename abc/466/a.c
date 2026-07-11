#include <stdio.h>

int main(void)
{
	int n, x;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x);
		if (x >= 0) {
			puts("No");
			return 0;
		}
	}
	puts("Yes");

	return 0;
}
