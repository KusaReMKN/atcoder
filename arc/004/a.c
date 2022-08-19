#include <stdio.h>
#include <math.h>

int
main(void)
{
	int n;
	int a[100][2];
	double max, len;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d%d", &a[i][0], &a[i][1]);
	max = 0;
	for (int i = 0; i < n; i++)
		for (int j = i+1; j < n; j++) {
			len = hypot(a[i][0]-a[j][0], a[i][1]-a[j][1]);
			if (max < len)
				max = len;
		}
	printf("%.9f\n", max);

	return 0;
}
