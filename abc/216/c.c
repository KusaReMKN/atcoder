#include <stdio.h>

int
main(void)
{
	unsigned long long n;
	int m[120], i;

	scanf("%llu", &n);
	i = 0;
	while (n)
		if (n & 1) {
			m[i++] = 'A';
			n -= 1;
		} else {
			m[i++] = 'B';
			n >>= 1;
		}
	for (i--; i >= 0; i--)
		putchar(m[i]);
	putchar('\n');

	return 0;
}
