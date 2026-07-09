#include <stdio.h>

#define ABS(a)	((a) < 0 ? -(a) : (a))

int
main(void)
{
	int n;
	scanf("%d", &n);

	int a[200000];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}

	int index = 0;
	for (int i = 1; i < n; i++)
		if (ABS(sum - a[index]*n) < ABS(sum - a[i]*n))
			index = i;
	printf("%i\n", index+1);

	return 0;
}
