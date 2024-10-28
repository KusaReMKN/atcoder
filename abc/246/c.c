#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define MIN(a, b)	((a) < (b) ? (a) : (b))

const int
compar(const void *a, const void *b)
{
	const int_least32_t *x = a, *y = b;

	return *y < *x ? -1 : *y == *x ? 0 : 1;
}

int
main(void)
{
	int_least32_t n, k, x;
	scanf("%" SCNdLEAST32 "%" SCNdLEAST32 "%" SCNdLEAST32, &n, &k, &x);

	int_least32_t a[200000];
	for (int_least32_t i = 0; i < n; i++)
		scanf("%" SCNdLEAST32, &a[i]);
	qsort(a, n, sizeof(a[0]), compar);

	for (int_least32_t i = 0; i < n && k > 0; i++) {
		int_least32_t use = MIN(a[i]/x, k);
		a[i] -= x*use;
		k -= use;
	}

	qsort(a, n, sizeof(a[0]), compar);
	for (int_least32_t i = 0; i < n && k > 0; i++) {
		a[i] = 0;
		k--;
	}

	int_least64_t sum = 0;
	for (int_least32_t i = 0; i < n; i++)
		sum += a[i];
	printf("%" PRIdLEAST64 "\n", sum);

	return 0;
}
