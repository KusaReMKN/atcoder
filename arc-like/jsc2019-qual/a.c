#include <stdio.h>

int
main(void)
{
	int m, d;
	int cnt;

	scanf("%d%d", &m, &d);
	cnt = 0;
	for (int i = 10; i <= d; i++)
		for (int j = 1; j <= m; j++)
			if (i/10 >= 2 && i%10 >= 2 && j == (i/10) * (i%10))
				cnt++;
	printf("%d\n", cnt);

	return 0;
}
