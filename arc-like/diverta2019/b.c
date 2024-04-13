#include <stdio.h>

int
main(void)
{
	int r, g, b, n;
	long cnt;

	scanf("%d%d%d%d", &r, &g, &b, &n);
	cnt = 0L;
	for (int i = 0; (long)i*r <= n; i++)
		for (int j = 0; (long)j*g + i*r <= n; j++)
			if (((long)n - i*r - j*g) % b == 0)
				cnt++;
	printf("%ld\n", cnt);

	return 0;
}

