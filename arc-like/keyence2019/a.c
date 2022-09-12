#include <stdio.h>
#include <stdlib.h>

static int
asc(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int
main(void)
{
	int n[4];

	for (int i = 0; i < 4; i++)
		scanf("%d", &n[i]);
	qsort(n, 4, sizeof(n[0]), asc);
	puts(n[0] == 1 && n[1] == 4 && n[2] == 7 && n[3] == 9 ?
			"YES" : "NO");

	return 0;
}
