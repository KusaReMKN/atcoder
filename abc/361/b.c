#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f;
	int g, h, i, j, k, l;
	int x, y, z;

	scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
	scanf("%d%d%d%d%d%d", &g, &h, &i, &j, &k, &l);
	x = !(d <= g || j <= a);
	y = !(e <= h || k <= b);
	z = !(f <= i || l <= c);
	fprintf(stderr, "%d%d%d\n", x, y, z);
	puts(x && y && z ? "Yes" : "No");

	return 0;
}
