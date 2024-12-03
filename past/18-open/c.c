#include <stdio.h>

int
main(void)
{
	int b1, r1, b2, r2, t;
	int t1, t2, cnt;

	scanf("%d%d%d%d%d", &b1, &r1, &b2, &r2, &t);
	t1 = b1 + r1;
	t2 = b2 + r2;
	cnt = 0;
	for (int i = 0; i < t; i++)
		if (i % t1 < b1 && i % t2 < b2)
			cnt++;
	printf("%d\n", cnt);

	return 0;
}
