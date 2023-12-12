#include <stdio.h>

#define MIN(a, b)	((a) < (b) ? (a) : (b))

int
main(void)
{
	int k, g, m;
	int gg, mm;

	scanf("%d%d%d", &k, &g, &m);
	gg = mm = 0;
	for (int i = 0; i < k; i++)
		if (gg == g)
			gg = 0;
		else if (mm == 0)
			mm = m;
		else {
			int t = MIN(g-gg, mm);
			gg += t, mm -= t;
		}
	printf("%d %d\n", gg, mm);

	return 0;
}
