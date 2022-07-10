#include <stdio.h>

int
main(void)
{
	long long h;
	long long a;
	int turn;

	scanf("%lld", &h);
	turn = a = 0;
	while (h) {
		h >>= 1;
		a += 1LL << turn++;
	}
	printf("%lld\n", a);

	return 0;
}
