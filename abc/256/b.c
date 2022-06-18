#include <stdio.h>
#include <stdint.h>

int
countbit(int32_t n)
{
	n = (n & 0x55555555) + (n >> 1 & 0x55555555);
	n = (n & 0x33333333) + (n >> 2 & 0x33333333);
	n = (n & 0x0f0f0f0f) + (n >> 4 & 0x0f0f0f0f);
	n = (n & 0x00ff00ff) + (n >> 8 & 0x00ff00ff);
	return (n & 0x0000ffff) + (n >>16 & 0x0000ffff);
}

int
main(void)
{
	int n, a;
	int base, pts;

	scanf("%d", &n);
	base = pts = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		base |= 1;
		base <<= a;
		pts += countbit(base & ~0x0F);
		base &= 0x0F;
	}
	printf("%d\n", pts);

	return 0;
}
