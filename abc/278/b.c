#include <stdio.h>

int
main(void)
{
	int h, m;
	int hh, mm;

	scanf("%d%d", &h, &m);
	hh = h / 10 * 10 + m / 10;
	mm = h % 10 * 10 + m % 10;
	while (!(0 <= hh && hh < 24 && 0 <= mm && mm < 60)) {
		m++;
		if (m == 60)
			m = 0, h++;
		if (h == 24)
			h = 0;
		hh = h / 10 * 10 + m / 10;
		mm = h % 10 * 10 + m % 10;
	}
	printf("%d %d\n", h, m);

	return 0;
}
