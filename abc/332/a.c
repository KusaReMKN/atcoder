#include <stdio.h>

int
main(void)
{
	int n, s, k;
	int p, q;
	int sum;

	scanf("%d%d%d", &n, &s, &k);
	sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &p, &q);
		sum += p * q;
	}
	if (sum < s)
		sum += k;
	printf("%d\n", sum);

	return 0;
}
