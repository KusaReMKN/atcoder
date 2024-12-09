#include <stdio.h>

int
main(void)
{
	int n, m, f, x, y, z;
	int s[200001] = { 0 };
	int t[200001] = { 0 };

	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &f);
		switch (f) {
		case 1:
			scanf("%d%d", &x, &y);
			t[y] = x;
			break;
		case 2:
			scanf("%d", &z);
			s[z]--;
			s[t[z]]++;
			t[z] = 0;
			break;
		}
	}
	for (int i = 1; i <= n; i++)
		printf("%d ", s[i]);
	printf("\n");

	return 0;
}
