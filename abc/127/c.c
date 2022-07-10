#include <stdio.h>

int
main(void)
{
	int n, m;
	int r, l;
	int min, max;

	scanf("%d%d", &n, &m);
	min = n;
	max = 1;
	for (int i = 0; i < m; i++) {
		scanf("%d%d", &r, &l);
		if (l < min)
			min = l;
		if (max < r)
			max = r;
	}
	printf("%d\n", min - max + 1 < 0 ? 0 : min - max + 1);

	return 0;
}

