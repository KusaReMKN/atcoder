#include <stdio.h>

int
main(void)
{
	int n, m;
	int a, b;
	int s[100] = { 0 }, t[100] = { 0 };

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &a, &b);
		s[a-1]++;
		t[b-1]++;
	}
	for (int i = 0; i < m; i++)
		printf("%d\n", t[i] - s[i]);

	return 0;
}
