#include <stdio.h>

int
main(void)
{
	int n, a;
	int v[200000] = { 0 };

	scanf("%d", &n);
	for (int i = 1; i < n; i++)
		scanf("%d", &a), v[--a]++;
	for (int i = 0; i < n; i++)
		printf("%d\n", v[i]);

	return 0;
}
