#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	int n, k;
	int a;
	int cur;

	scanf("%d%d", &n, &k);
	cur = n;
	for (int i = 0; i < k && cur != 0; i++) {
		scanf("%d", &a);
		cur = abs(cur - a);
	}
	printf("%d", n - cur);

	return 0;
}
