#include <stdio.h>
#include <stdlib.h>

static int
compar(const void *a, const void *b)
{
	if (*(long *)a == *(long *)b)
		return 0;
	return *(long *)a < *(long *)b ? -1 : 1;
}

int
main(void)
{
	int n;
	scanf("%d", &n);

	long o[] = {
		1,
		11,
		111,
		1111,
		11111,
		111111,
		1111111,
		11111111,
		111111111,
		1111111111,
		11111111111,
		111111111111,
	};
	long v[500];
	int ptr = 0;
	for (int i = 0; i < 12; i++)
		for (int j = 0; j < 12; j++)
			for (int k = 0; k < 12; k++) {
				long t = o[i] + o[j] + o[k];
				if (bsearch(&t, v, ptr, sizeof(v[0]), compar)
						!= NULL)
					continue;
				v[ptr++] = t;
				qsort(v, ptr, sizeof(v[0]), compar);
			}

	printf("%ld\n", v[n-1]);

	return 0;
}
