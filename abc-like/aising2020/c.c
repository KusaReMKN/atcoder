#include <stdio.h>

int
main(void)
{
	int n;
	scanf("%d", &n);

	int q[10001] = { 0 };
	long x, y, z;
	for (x = 1; x <= 100; x++)
		for (y = 1; y <= 100; y++)
			for (z = 1; z <= 100; z++) {
				long k = x*x + y*y + z*z + x*y + y*z + z*x;
				if (k <= 10000)
					q[k]++;
			}
	for (int i = 1; i <= n; i++)
		printf("%d\n", q[i]);

	return 0;
}
