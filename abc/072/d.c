#include <stdio.h>

int
main(void)
{
	int n;
	int p[100000];
	int cnt;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &p[i]);
	cnt = 0;
	for (int i = 0; i < n; i++)
		if (p[i] == i+1) {
			int t = p[i];
			p[i] = p[(i+1)%n];
			p[(i+1)%n] = t;
			cnt++;
		}
	printf("%d\n", cnt);

	return 0;
}

