#include <stdio.h>

int
main(void)
{
	int a, n, m;
	int c[100] = { 0 };
	char b[2];

	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d%s", &a, b);
		puts(b[0] == 'M' && !c[a-1]++ ? "Yes" : "No");
	}

	return 0;
}
