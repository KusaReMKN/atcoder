#include <stdio.h>

int
main(void)
{
	int n, a;
	int cnt;

	scanf("%d", &n);
	cnt = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (~i & 1 && a & 1)
			cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}
