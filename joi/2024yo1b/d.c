#include <stdio.h>

int
main(void)
{
	int x, n;
	int cnt;

	scanf("%d%d", &x, &n);
	cnt = 0;
	while (x < n) {
		cnt++;
		switch (x % 3) {
		case 0:
			x++;
			break;
		case 1:
			x <<= 1;
			break;
		case 2:
			x *= 3;
			break;
		}
	}
	printf("%d\n", cnt);

	return 0;
}
