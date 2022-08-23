#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int
z(int n, int *p, int *q)
{
	static int a, b, c, v[10];
	int l, f[10] = { 0 };

	l = 0;
	for (int i = 0; v[i]; i++)
		f[v[i]] = ++l;
	if (l == n) {
		c++;
		if (memcmp(v, p, sizeof(v[0]) * n) == 0)
			a = c;
		if (memcmp(v, q, sizeof(v[0]) * n) == 0)
			b = c;
	}
	for (int i = 1; i <= n; i++)
		if (f[i] == 0) {
			v[l] = i, v[l+1] = 0;
			z(n, p, q);
		}

	return abs(a - b);
}

int
main(void)
{
	int n;
	int p[10], q[10];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &p[i]);
	for (int i = 0; i < n; i++)
		scanf("%d", &q[i]);
	printf("%d", z(n, p, q));

	return 0;
}
