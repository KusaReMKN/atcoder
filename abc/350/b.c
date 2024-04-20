#include <stdio.h>

int
main(void)
{
	int n, q;
	int v[1000] = { 0 };
	int cnt;

	scanf("%d%d", &n, &q);
	for (int i = 0; i < n; i++)
		v[i] = 1;
	for (int i = 0; i < q; i++) {
		int t;
		scanf("%d", &t);
		v[t-1] = !v[t-1];
	}
	cnt = 0;
	for (int i = 0; i < n; i++)
		if (v[i] > 0)
			cnt++;
	printf("%d\n", cnt);

	return 0;
}
