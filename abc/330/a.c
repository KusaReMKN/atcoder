#include <stdio.h>

int
main(void)
{
	int n, l, a;
	int cnt;

	scanf("%d%d", &n, &l);
	cnt = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a >= l)
			cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}
