#include <stdio.h>

int
main(void)
{
	int n, a, a1, yes;

	scanf("%d%d", &n, &a1);
	yes = 1;
	for (int i = 1; i < n; i++) {
		scanf("%d", &a);
		if (a != a1) {
			yes = 0;
			break;
		}
	}
	puts(yes ? "Yes" : "No");

	return 0;
}
