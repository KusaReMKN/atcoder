#include <stdio.h>

int
main(void)
{
	int n, q;
	scanf("%d%d", &n, &q);

	int v[100001] = { 0 };
	for (int i = 0; i < q; i++) {
		int l, r, x;
		scanf("%d%d%d", &l, &r, &x);
		v[l-1] += x;
		v[r] -= x;
	}

	int g[100000], sum;
	sum = 0;
	for (int i = 0; i < n; i++) {
		sum += v[i];
		g[i] = sum;
	}
	for (int i = 1; i < n; i++)
		if (g[i-1] < g[i-0])
			putchar('<');
		else if (g[i-1] == g[i])
			putchar('=');
		else
			putchar('>');
	putchar('\n');

	return 0;
}
