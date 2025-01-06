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
	uint_least32_t x;

	scanf("%" SCNuLEAST32, &x);
	printf_032b(x);
	printf_032b(~x);
	printf_032b(x << 1);
	printf_032b(x >> 1);

	return 0;
}
