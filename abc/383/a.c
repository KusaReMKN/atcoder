#include <stdio.h>

#define MAX(a, b)	((a) > (b) ? (a) : (b))

int
main(void)
{
	int n;
	int t, v;
	int cur, tim;

	scanf("%d", &n);
	cur = tim = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &t, &v);
		cur -= t - tim;
		cur = MAX(0, cur);
		cur += v;
		tim = t;
	}
	printf("%d\n", cur);

	return 0;
}
