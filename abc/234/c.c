#include <stdio.h>

int
main(void)
{
	long k;
	int v[100];
	int c;

	scanf("%ld", &k);
	c = 0;
	do {
		v[c++] = k & 1;
		k >>= 1;
	} while (k);
	for (c--; c >= 0; c--)
		putchar(v[c] ? '2' : '0');
	putchar('\n');

	return 0;
}
