#include <stdio.h>

int
main(void)
{
	int n, k;
	scanf("%d%d", &n, &k);

	int cnt = 0;
	int last = -2;
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		if (a >= k) {
			if (i - last > 1)
				cnt++;
			last = i;
		}
	}
	printf("%d\n", cnt);

	return 0;
}
