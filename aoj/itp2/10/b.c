#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

static void
printf_032b(uint_least32_t x)
{
	int i;
	char buf[33], *p;

	p = &buf[32];
	*p-- = '\0';
	for (i = 0; i < 32; i++) {
		*p-- = '0' + (x & 1);
		x >>= 1;
	}
	(void)puts(buf);
}

int
main(void)
{
	uint_least32_t x, y;

	scanf("%" SCNuLEAST32 "%" SCNuLEAST32, &x, &y);
	printf_032b(x & y);
	printf_032b(x | y);
	printf_032b(x ^ y);

	return 0;
}
