#include <stdio.h>

int
main(void)
{
	int a, b, c, d;
	int i, t;

	scanf("%1d%1d%1d%1d", &a, &b, &c, &d);
	for (i = 0; i < 8; i++) {
		t = i & 4 ? a + b : a - b;
		t = i & 2 ? t + c : t - c;
		t = i & 1 ? t + d : t - d;
		if (t == 7)
			break;
	}
	printf("%d%c%d%c%d%c%d=7\n",
			a, i & 4 ? '+' : '-', b, i & 2 ? '+' : '-',
			c, i & 1 ? '+' : '-', d);

	return 0;
}
