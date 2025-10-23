#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	int x, y;
	int cnt;

	scanf("%d%d", &x, &y);
	cnt = 0;
	for (int i = 1; i <= 6; i++)
		for (int j = 1; j <= 6; j++)
			if (i+j >= x || abs(i-j) >= y)
				cnt++;
	printf("%.9f\n", cnt/36.);

	return 0;
}
