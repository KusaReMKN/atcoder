#include <stdio.h>

int
main(void)
{
	int n;
	int p, q;
	double sum;

	scanf("%d", &n);
	sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &p, &q);
		sum += (double)q / p;
	}
	printf("%.9f\n", sum);

	return 0;
}
