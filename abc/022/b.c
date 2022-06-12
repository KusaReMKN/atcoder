#include <stdio.h>

int
main(void)
{
	int n, a;
	int flower[100000] = { 0 };
	int cnt;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		flower[a-1]++;
	}
	cnt = 0;
	for (int i = 0; i < 100000; i++)
		if (flower[i] > 1)
			cnt += flower[i] - 1;
	printf("%d\n", cnt);

	return 0;
}
