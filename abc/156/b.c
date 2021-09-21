#include <stdio.h>

int main()
{
	int n, k, i;

	scanf("%d%d", &n, &k);
	for (i = 0; n; i++)
		n /= k;
	printf("%d\n", i);

	return 0;
}
