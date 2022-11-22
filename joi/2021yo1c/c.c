#include <stdio.h>

int
main(void)
{
	int n, m;
	int a[2000], b[2000];
	int cnt;

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < m; i++)
		scanf("%d", &b[i]);
	cnt = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (a[i] <= b[j])
				cnt++;
	printf("%d\n", cnt);

	return 0;
}
