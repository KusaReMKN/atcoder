#include <stdio.h>
#include <string.h>

int
main(void)
{
	int n, m;
	char s[100000][11], t[11];
	int p;

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
		scanf("%s", s[i]);
	p = 0;
	for (int i = 0; i < m; i++) {
		scanf("%s", t);
		while (strcmp(t, s[p++]))
			puts("No");
		puts("Yes");
	}

	return 0;
}
