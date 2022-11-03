#include <stdio.h>

int
main(void)
{
	int n, m, a, b;
	int aa[2000] = { 0 };
	int cnt;

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		aa[a-1]++;
	}
	cnt = 0;
	for (int i = 0; i < m; i++) {
		scanf("%d", &b);
		cnt += aa[b-1];
		aa[b-1] = 0;
	}
	printf("%d\n", cnt);

	return 0;
}
