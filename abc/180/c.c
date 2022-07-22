#include <stdio.h>

int
main(void)
{
	long n;
	long a[1000000], b[1000000];
	int l, k;

	scanf("%ld", &n);
	l = k = 0;
	for (long i = 1; i*i <= n; i++)
		if (n % i == 0) {
			a[l++] = i;
			b[k++] = n/i;
		}
	for (int i = 0; i < l; i++)
		printf("%ld\n", a[i]);
	if (a[l-1] == b[k-1])
		k--;
	for (int i = k-1; i >= 0; i--)
		printf("%ld\n", b[i]);

	return 0;
}
