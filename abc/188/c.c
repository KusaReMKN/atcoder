#include <stdio.h>

int main(void)
{
	int i, n, a, maxa1 = 0, maxa2 = 0;
	int n1, n2;

	scanf("%d", &n);
	for (i = 0; i < 1 << n - 1; i++) {
		scanf("%d", &a);
		if (maxa1 < a) maxa1 = a, n1 = i + 1;
	}

	for (i = 0; i < 1 << n - 1; i++) {
		scanf("%d", &a);
		if (maxa2 < a) maxa2 = a, n2 = i + 1;
	}

	if (maxa1 < maxa2) return printf("%d\n", n1), 0;
	printf("%d\n", (1 << n - 1) + n2);

	return 0;
}
