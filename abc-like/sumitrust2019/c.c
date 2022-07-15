#include <stdio.h>

#define q(d, i) \
	(((i) < 0) ? 0 : (d)[(i)])

int
main(void)
{
	int x;
	int d[1000001] = { 0 };
	int t;

	scanf("%d", &x);
	d[0] = 1;
	for (int i = 1; i <= x; i++) {
		t = 0;
		for (int j = 100; j <= 105; j++)
			t |= q(d, i-j);
		d[i] = t;
	}
	printf("%d\n", d[x]);

	return 0;
}
