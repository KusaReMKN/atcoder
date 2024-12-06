#include <stdio.h>

int
main(void)
{
	int n, a0, a;
	int inc, dec;

	scanf("%d%d", &n, &a0);
	inc = dec = 0;
	for (int i = 1; i < n; i++) {
		scanf("%d", &a);
		if (a0 < a)
			inc += a - a0;
		else
			dec += a0 - a;
		a0 = a;
	}
	printf("%d %d\n", inc, dec);

	return 0;
}
