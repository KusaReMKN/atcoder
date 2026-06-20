#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	div_t d;
	int a, i, n, m;

	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		d = div(a, m);
		printf("%d %d\n", d.quot, d.rem);
	}

	return 0;
}
