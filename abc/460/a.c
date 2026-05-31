#include <stdio.h>

int
main(void)
{
	int n, m;
	int cnt;

	scanf("%d%d", &n, &m);
	cnt = 0;
	while (m > 0) {
		m = n % m;
		cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}
