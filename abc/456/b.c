#include <stdio.h>
#include <stdlib.h>

static int
compar(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int
main(void)
{
	int a[3][6], d[3];
	int cnt;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 6; j++)
			scanf("%d", &a[i][j]);
	cnt = 0;
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			for (int k = 0; k < 6; k++) {
				d[0] = a[0][i];
				d[1] = a[1][j];
				d[2] = a[2][k];
				qsort(d, 3, sizeof(int), compar);
				if (d[0] == 4 && d[1] == 5 && d[2] == 6)
					cnt++;
			}
	printf("%.9f\n", cnt/(6.*6.*6.));

	return 0;
}
