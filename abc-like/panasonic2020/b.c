#include <stdio.h>

int
main(void)
{
	long long h, w;

	scanf("%lld%lld", &h, &w);
	if (h == 1 || w == 1)
		puts("1");
	else
		printf("%lld\n", (h/2 + h%2) * (w/2 + w%2) + (h/2) * (w/2));

	return 0;
}
