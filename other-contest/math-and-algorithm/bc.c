#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	int n, k, a;
	int sum;

	scanf("%d%d", &n, &k);
	sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		sum += abs(a);
	}
	puts(sum <= k && (sum & 1) == (k & 1) ? "Yes" : "No");

	return 0;
}
