#include <assert.h>
#include <stdio.h>

int
main(void)
{
	int n, t;
	int xh, xl, xm, xt;
	int yh, yl, ym, yt;

	setbuf(stdout, NULL);
	scanf("%d", &n);
	xl = 1;
	xh = n;
	while (xl != xh) {
		xm = xl + xh >> 1;
		xt = xm - xl + 1;
		printf("? %d %d 1 %d\n", xl, xm, n);
		scanf("%d", &t);
		assert(t != -1);
		if (t != xt)
			xh = xm;
		else
			xl = xm+1;
	}
	yl = 1;
	yh = n;
	while (yl != yh) {
		ym = yl + yh >> 1;
		yt = ym - yl + 1;
		printf("? 1 %d %d %d\n", n, yl, ym);
		scanf("%d", &t);
		assert(t != -1);
		if (t != yt)
			yh = ym;
		else
			yl = ym+1;
	}
	printf("! %d %d\n", xl, yl);

	return 0;
}
