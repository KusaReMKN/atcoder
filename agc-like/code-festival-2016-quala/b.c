#include <stdio.h>

int
main(void)
{
	int n, a[100001];
	int cnt;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	cnt = 0;
	for (int i = 1; i <= n; i++)
		if (a[a[i]] == i)
			cnt++;
	printf("%d\n", cnt / 2);

	return 0;
}
