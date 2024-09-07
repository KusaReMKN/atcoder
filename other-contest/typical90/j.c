#include <stdio.h>
#include <string.h>

int
main(void)
{
	int c1[100001], c2[100001], s1[100001], s2[100001];
	int c, l, n, p, q, r;

	scanf("%d", &n);
	memset(c1, 0, sizeof(c1));
	memset(c2, 0, sizeof(c2));
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &c, &p);
		(c == 1 ? c1 : c2)[i+1] = p;
	}

	s1[0] = s2[0] = 0;
	for (int i = 1; i <= n; i++) {
		s1[i] = s1[i-1] + c1[i];
		s2[i] = s2[i-1] + c2[i];
	}

	scanf("%d", &q);
	for (int i = 0; i < q; i++) {
		scanf("%d%d", &l, &r);
		printf("%d %d\n", s1[r]-s1[l-1], s2[r]-s2[l-1]);
	}

	return 0;
}
