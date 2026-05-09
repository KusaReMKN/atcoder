#include <stdio.h>

int
main(void)
{
	int a[100], n, x;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &x);
	printf("%d\n", a[x-1]);

	return 0;
}
