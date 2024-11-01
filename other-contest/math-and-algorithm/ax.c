#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

#define ABS(x)	((x) < 0 ? -(x) : (x))

int
main(void)
{
	int_least32_t n, x, y, d;

	scanf("%" SCNdLEAST32 "%" SCNdLEAST32 "%" SCNdLEAST32, &n, &x, &y);
	d = ABS(x) + ABS(y);
	puts(n < d || (d-n) % 2 != 0 ? "No" : "Yes");

	return 0;
}
