#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	long x1, y1, x2, y2;

	scanf("%ld%ld%ld%ld", &x1, &y1, &x2, &y2);
	for (int i = -2; i <= 2; i++)
		for (int j = -2; j <= 2; j++)
			for (int k = -2; k <= 2; k++)
				for (int l = -2; l <= 2; l++) {
					if (i * j == 0 || k * l == 0)
						continue;
					if (abs(i) == abs(j)
							|| abs(k) == abs(l))
						continue;
					if (x1 + i == x2 + k
							&& y1 + j == y2 + l)
						return puts("Yes"), 0;
				}
	puts("No");

	return 0;
}
