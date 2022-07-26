#include <stdio.h>

int
main(void)
{
	int n, m, s, c;
	int r[3] = { -1, -1, -1 };

	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d%d", &s, &c);
		if (r[--s] != -1 && r[s] != c)
			return puts("-1"), 0;
		r[s] = c;
	}
	for (int i = 0; i < n; i++)
		if (r[i] == -1)
			if (n > 1 && i == 0)
				r[i] = 1;
			else
				r[i] = 0;
	if (n > 1 && r[0] == 0)
		printf("%d", -1);
	else
		for (int i = 0; i < n; i++)
			printf("%d", r[i]);
	puts("");

	return 0;
}
