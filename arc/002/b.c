#include <stdio.h>

static int
isleap(int y)
{
	return y%4 == 0 && y%100 != 0 || y%400 == 0;
}

static void
next(int *y, int *m, int *d)
{
	++*d;
	switch (*m) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (*d == 31+1) {
			++*m;
			*d = 1;
		}
		if (*m == 12+1) {
			++*y;
			*m = 1;
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		if (*d == 30+1) {
			++*m;
			*d = 1;
		}
		break;
	case 2:
		if (*d == (isleap(*y) ? 29 : 28)+1) {
			++*m;
			*d = 1;
		}
		break;
	}
}

int
main(void)
{
	int y, m, d;

	scanf("%d/%d/%d", &y, &m, &d);
	while (y%m != 0 || y/m%d != 0)
		next(&y, &m, &d);
	printf("%04d/%02d/%02d\n", y, m, d);

	return 0;
}
