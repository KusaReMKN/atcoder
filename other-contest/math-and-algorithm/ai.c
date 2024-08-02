#include <stdio.h>

int
main(void)
{
	int n, q, a;
	long s[100001];
	int l, r;

	scanf("%d%d", &n, &q);
	s[0] = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a);
		s[i] = s[i-1] + a;
	}
	for (int i = 0; i < q; i++) {
		scanf("%d%d", &l, &r);
		printf("%ld\n", s[r] - s[l-1]);
	}

	return 0;
}
