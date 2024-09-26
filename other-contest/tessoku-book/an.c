#include <stdio.h>

int
main(void)
{
	int a, n;
	int l[100] = { 0 };
	long sum;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		l[a-1]++;
	}
	sum = 0;
	for (int i = 0; i < 100; i++)
		sum += (long)(l[i]-0) * (l[i]-1) * (l[i]-2) / 6;
	printf("%ld\n", sum);

	return 0;
}
