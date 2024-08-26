#include <stdio.h>
#include <stdlib.h>

static int
compar(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int
main(void)
{
	int n;
	int a[100];
	int cnt, ccnt;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	cnt = 0;
	do {
		cnt++;
		qsort(a, n, sizeof(a[0]), compar);
		a[0]--;
		a[1]--;
		ccnt = 0;
		for (int i = 0; i < n; i++)
			if (a[i] > 0)
				ccnt++;
	} while (ccnt > 1);
	printf("%d\n", cnt);

	return 0;
}
