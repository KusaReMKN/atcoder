#include <stdio.h>

int
main(void)
{
	int x;
	scanf("%d", &x);

	int n;
	scanf("%d", &n);

	int w[100];
	for (int i = 0; i < n; i++)
		scanf("%d", &w[i]);

	int q;
	scanf("%d", &q);

	int a[100] = { 0 };
	for (int i = 0; i < q; i++) {
		int p;
		scanf("%d", &p);
		a[p-1] = !a[p-1];
		x += a[p-1] ? w[p-1] : -w[p-1];
		printf("%d\n", x);
	}

	return 0;
}
