#include <stdio.h>

int
main(void)
{
	int n, a[100], k;
	int c;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &k);

	c = 0;
	for (int i = 0; i < n; i++)
		if (k <= a[i])
			c++;
	printf("%d\n", c);

	return 0;
}
