#include <stdio.h>

int
main(void)
{
	int acd;
	int mod, cnt;

	scanf("%d", &acd);
	acd %= 90;
	mod = acd;
	cnt = 0;
	if (acd == 45) {
		cnt = 1;
		goto quit;
	}
	do {
		mod = (mod + acd) % 90;
		cnt++;
	} while (mod != acd);
quit:
	printf("%d\n", cnt);

	return 0;
}
