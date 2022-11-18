#include <stdio.h>
#include <stdlib.h>

static int
desc(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int
main(void)
{
	int n, a;
	int odd[200000], even[200000];
	int oddcnt, evencnt;
	int max;

	scanf("%d", &n);
	oddcnt = evencnt = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a & 1)
			odd[oddcnt++] = a;
		else
			even[evencnt++] = a;
	}
	qsort(odd, oddcnt, sizeof(odd[0]), desc);
	qsort(even, evencnt, sizeof(even[0]), desc);
	max = -1;
	if (oddcnt >= 2 && max < odd[0] + odd[1])
		max = odd[0] + odd[1];
	if (evencnt >= 2 && max < even[0] + even[1])
		max = even[0] + even[1];
	printf("%d\n", max);

	return 0;
}
