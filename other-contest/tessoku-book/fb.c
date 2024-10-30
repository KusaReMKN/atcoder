#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

static int
compar(const void *a, const void *b)
{
	const uint_least64_t *x = a, *y = b;

	return *x < *y ? -1 : *x == *y ? 0 : 1;
}

int
main(void)
{
	uint_least64_t n;
	(void)scanf("%" SCNuLEAST64, &n);

	uint_least64_t *p = NULL;
	size_t cur = 0;
	for (uint_least64_t i = 1; i*i <= n; i++)
		if (n % i == 0) {
			cur += 2;
			p = realloc(p, sizeof(p[0]) * cur);
			p[cur-2] = i;
			p[cur-1] = i == n/i ? 0 : n/i;
		}
	qsort(p, cur, sizeof(p[0]), compar);

	for (size_t i = 0; i < cur; i++) {
		if (p[i] == 0)
			continue;
		printf("%" PRIuLEAST64 "\n", p[i]);
	}

	return 0;
}
