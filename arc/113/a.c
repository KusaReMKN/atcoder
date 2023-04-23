#include <stdio.h>

int
main(void)
{
	int k;
	long cnt;

	scanf("%d", &k);
	cnt = 0;
	for (int a = 1; a <= k; a++)
		for (int b = 1; a*b <= k; b++)
			for (int c = 1; a*b*c <= k; c++)
				cnt++;
	printf("%ld\n", cnt);

	return 0;
}
