#include <stdio.h>

int
main(void)
{
	int n, a0, a, cnt;

	scanf("%d%d", &n, &a0);
	cnt = 1;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (a0 == a)
			cnt++;
		else
			cnt = 1;
		if (cnt == 3) {
			puts("Yes");
			return 0;
		}
		a0 = a;
	}
	puts("No");

	return 0;
}
