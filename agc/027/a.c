#include <stdio.h>
#include <stdlib.h>

int
asc(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int
main(void)
{
	int n, x;
	int a[100];
	int happy;

	scanf("%d%d", &n, &x);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	qsort(a, n, sizeof(a[0]), asc);
	happy = 0;
	for (int i = 0; i < n && x > 0; i++) {
		if (a[i] <= x)
			happy++;
		x -= a[i];
	}
	if (x > 0)
		happy--;
	printf("%d\n", happy);

	return 0;
}
