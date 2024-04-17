#include <stdio.h>

int
main(void)
{
	int n, q;
	char s[300001];
	int cnt[300001];

	scanf("%d%d%s", &n, &q, s);

	cnt[0] = 0;
	for (int i = 1; i < n; i++)
		cnt[i] = cnt[i-1] + (s[i-1]==s[i]);
	cnt[n] = cnt[n-1];

	for (int i = 0; i < q; i++) {
		int l, r;
		scanf("%d%d", &l, &r);
		printf("%d\n", cnt[--r]-cnt[--l]);
	}

	return 0;
}
