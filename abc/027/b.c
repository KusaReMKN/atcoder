#include <stdio.h>

int
main(void)
{
	int n, a[100];
	int sum, d, brd, k;

	scanf("%d", &n);
	sum = 0;
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]), sum += a[i];
	if (sum % n != 0)
		return puts("-1"), 0;
	d = sum / n;
	sum = brd = k = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
		if (sum != d * (i-k+1))
			brd++;
		else
			sum = 0, k = (i+1);
	}
	printf("%d\n", brd);

	return 0;
}
