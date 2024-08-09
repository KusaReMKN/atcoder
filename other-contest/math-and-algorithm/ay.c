#include <stdio.h>

int
main(void)
{
	long n;

	scanf("%ld", &n);
	printf("%c\n", "2486"[n%4]);

	return 0;
}
