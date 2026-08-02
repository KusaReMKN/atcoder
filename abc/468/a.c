#include <stdio.h>

int
main(void)
{
	int n;
	int a0, a1, a2;
	int cnt = 0;

	scanf("%d", &n);
	scanf("%d%d", &a0, &a1);
	cnt = 0;
	for (int i = 2; i < n; i++) {
		scanf("%d", &a2);
		if (a0 < a1 && a1 > a2)
			cnt++;
		a0 = a1;
		a1 = a2;
	}
	printf("%d\n", cnt);

	return 0;
}
