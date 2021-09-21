#include <stdio.h>

int main(void)
{
	int n, k, q;
	int d[100001] = { 0 };
	int i;

	scanf("%d%d%d", &n, &k, &q);
	for (i = 0; i < q; i++) {
		int _;
		scanf("%d", &_);
		d[_]++;
	}
	for (i = 1; i <= n; i++)
		if (k - q + d[i] > 0)
			puts("Yes");
		else
			puts("No");

	return 0;
}
