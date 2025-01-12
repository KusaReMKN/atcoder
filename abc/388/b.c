#include <stdio.h>

int
main(void)
{
	int n, d;
	int t[100], l[100];
	int max;

	scanf("%d%d", &n, &d);
	for (int i = 0; i < n; i++)
		scanf("%d%d", &t[i], &l[i]);
	for (int i = 1; i <= d; i++) {
		max = 0;
		for (int j = 0; j < n; j++)
			if (max < t[j] * (l[j]+i))
				max = t[j] * (l[j]+i);
		printf("%d\n", max);
	}

	return 0;
}
