#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	int x, y, z;
	int d;

	scanf("%d%d%d", &x, &y, &z);
	if (y < 0)
		x = -x, y = -y, z = -z;
	if (x < y)
		d = abs(x);
	else {
		if (z > y)
			d = -1;
		else
			d = abs(z) + abs(x - z);
	}
	printf("%d\n", d);

	return 0;
}
