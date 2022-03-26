#include <stdio.h>

int main(void)
{
	int n, i, b;
	int a[100000] = { 0 };

	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", a + i);
	for (i = 0; i < n; i++) {
		scanf("%d", &b);
		a[i] *= b;
	}
	b = 0;
	for (i = 0; i < n; i++) {
		b += a[i];
	}
	if (b == 0) return puts("Yes"), 0;
	puts("No");

	return 0;
}
