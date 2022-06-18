#include <stdio.h>
#include <stdlib.h>

struct set {
	int r, l;
};

int
asc(const void *a, const void *b)
{
	return ((struct set *)a)->l - ((struct set *)b)->l;
}

#define max(a, b) ((a) > (b) ? (a) : (b))

int
main(void)
{
	int n;
	struct set s[200000];
	int i;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		int r, l;
		scanf("%d%d", &l, &r);
		s[i].l = l;
		s[i].r = r;
	}
	qsort(s, n, sizeof(s[0]), asc);
	int l = s[0].l;
	for (i = 1; i < n; i++) {
		if (s[i].l <= s[i-1].r) {
			s[i].r = max(s[i].r, s[i-1].r);
		} else {
			printf("%d %d\n", l, s[i-1].r);
			l = s[i].l;
		}
	}
	printf("%d %d\n", l, s[i-1].r);

	return 0;
}
