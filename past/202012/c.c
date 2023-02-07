#include <stdio.h>

int
main(void)
{
	int n;
	char buf[4] = "", *p;

	scanf("%d", &n);
	p = buf + sizeof(buf) - 1;;
	if (n == 0)
		*p-- = '0';
	else
		while (n) {
			*p-- = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"[n%36];
			n /= 36;
		}
	puts(p+1);

	return 0;
}
