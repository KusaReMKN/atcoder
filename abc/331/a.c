#include <stdio.h>

int
main(void)
{
	int M, D, y, m, d;

	scanf("%d%d%d%d%d", &M, &D, &y, &m, &d);
	if (++d > D) {
		d = 1;
		if (++m > M) {
			m = 1;
			y++;
		}
	}
	printf("%d %d %d\n", y, m, d);

	return 0;
}
