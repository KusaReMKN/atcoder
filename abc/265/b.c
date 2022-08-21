#include <stdio.h>

int
main(void)
{
	int n, m;
	long t;
	int a[100000];
	int z[100000][2];
	int c, p;

	scanf("%d%d%ld", &n, &m, &t);
	for (int i = 1; i <= n-1; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < m; i++)
		scanf("%d%d", &z[i][0], &z[i][1]);
	c = 1;
	p = 0;
	while (c < n && t > a[c]) {
		t -= a[c++];
		if (p < m && z[p][0] == c)
			t += z[p++][1];
	}
	puts(c == n ? "Yes" : "No");

	return 0;
}
