#include <stdio.h>

int
main(void)
{
	int n;
	int s, e;
	int t[2401] = { 0 };
	int now, prev;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%04d-%04d", &s, &e);
		s = s / 5 * 5;
		e = (e / 5 + !!(e % 5)) * 5;
		if (e % 100 >= 60)
			e += 100, e -= 60;
		t[s]++, t[e]--;
	}
	now = prev = 0;
	for (int i = 0; i <= 2400; i += 5) {
		now += t[i];
		if (!prev && now)
			printf("%04d-", i);
		if (prev && !now)
			printf("%04d\n", i);
		prev = now;
	}

	return 0;
}
