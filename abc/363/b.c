#include <stdio.h>

int
main(void)
{
	int n, t, p;
	int l[100];
	int d;

	scanf("%d%d%d", &n, &t, &p);
	for (int i = 0; i < n; i++)
		scanf("%d", &l[i]);
	for (d = 0; ; d++) {
		int cnt = 0;
		for (int i = 0; i < n; i++)
			if (l[i]++ >= t)
				cnt++;
		if (cnt >= p) {
			printf("%d\n", d);
			return 0;
		}
	}

	return -1;
}
