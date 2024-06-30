#include <stdio.h>

int
main(void)
{
	long int x1, y1, r1;
	long int x2, y2, r2;

	scanf("%ld%ld%ld", &x1 ,&y1, &r1);
	scanf("%ld%ld%ld", &x2 ,&y2, &r2);

	long int rm = (r1-r2)*(r1-r2);
	long int rp = (r1+r2)*(r1+r2);
	long int dd = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
	int t;
	if (dd < rm)
		t = 1;
	else if (dd == rm)
		t = 2;
	else if (dd < rp)
		t = 3;
	else if (dd == rp)
		t = 4;
	else
		t = 5;
	printf("%d\n", t);

	return 0;
}
