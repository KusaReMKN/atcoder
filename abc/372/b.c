#include <stdio.h>

int
main(void)
{
	int m, n;
	int a[20] = { 0 };
	int sum;

	scanf("%d", &m);

	n = 0;
	do {
		a[n++] = m % 3;
		m /= 3;
	} while (m > 0);

	sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	printf("%d\n", sum);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < a[i]; j++)
			printf("%d ", i);
	printf("\n");

	return 0;
}
