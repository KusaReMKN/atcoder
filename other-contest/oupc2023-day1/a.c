#include <stdio.h>

int
main(void)
{
	int a, t;
	int cnt;

	scanf("%d%d", &a, &t);
	cnt = 0;
	while (a > t)
		cnt++, a -= t;
	printf("%d\n", cnt);

	return 0;
}
