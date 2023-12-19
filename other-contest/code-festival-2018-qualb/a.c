#include <stdio.h>

int
main(void)
{
	int n;
	int cnt;

	scanf("%d", &n);
	cnt = 0;
	for (int i = 1; i <= 100; i++)
		if (i % n == 0)
			cnt++;
	printf("%d\n", 100 - cnt);

	return 0;
}
