#include <stdio.h>

#define min(a, b) ((a) < (b) ? (a) : (b))

int
main(void)
{
	int n, a[100001], b[100000];
	long sum, t;

	scanf("%d", &n);
	for (int i = 0; i < n+1; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
		scanf("%d", &b[i]);
	sum = 0;
	for (int i = n-1; i >= 0; i--) {
		t = a[i+1];
		a[i+1] -= min(a[i+1], b[i]);
		b[i] -= min(t, b[i]);
		sum += t - a[i+1];
		t = a[i];
		a[i] -= min(a[i], b[i]);
		sum += t - a[i];
	}
	printf("%ld\n", sum);

	return 0;
}
