#include <stdio.h>

int
main(Void)
{
	int n;
	int p[300001], q[300001];
	int q2i[300001];

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &p[i]);
	for (int i = 1; i <= n; i++)
		scanf("%d", &q[i]);

	for (int i = 1; i <= n; i++)
		q2i[q[i]] = i;
	for (int i = 1; i <= n; i++)
		printf("%s%d", i < 2 ? "" : " ", q[p[q2i[i]]]);

	return 0;
}
