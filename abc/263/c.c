#include <stdio.h>

void
f(int k, int n, int m)
{
	int l;
	static int v[11];

	if (n == 0) {
		while (v[l++]);
		for (l-=2; l >= 0; l--)
			printf("%d%s", v[l], l == 0 ? "\n" : " ");
	} else {
		for (int i = k+1; i <= m; i++) {
			v[n-1] = i;
			f(i, n-1, m);
		}
	}
}

int
main(void)
{
	int n, m;

	scanf("%d%d", &n, &m);
	f(0, n, m);

	return 0;
}
