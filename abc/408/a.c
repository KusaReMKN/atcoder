#include <stdio.h>

int
main(void)
{
	int n, s;
	int t, t0;
	int yes;

	scanf("%d%d", &n, &s);
	t0 = 0;
	yes = 1;
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		if (t - t0 > s)
			yes = 0;
		t0 = t;
	}
	puts(yes ? "Yes" : "No");

	return 0;
}
