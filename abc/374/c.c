#include <stdio.h>

#define MAX(a, b)	((a) > (b) ? (a) : (b))
#define MIN(a, b)	((a) < (b) ? (a) : (b))

int
main(void)
{
	int n;
	scanf("%d", &n);

	int k[20];
	for (int i = 0; i < n; i++)
		scanf("%d", &k[i]);

	int min = 2000000000;
	for (int i = 0; i < 1 << n; i++) {
		int zero, one;
		zero = one = 0;
		for (int j = 0; j < n; j++)
			if (i & 1 << j)
				one += k[j];
			else
				zero += k[j];
		min = MIN(min, MAX(one, zero));
	}
	printf("%ld\n", min);

	return 0;
}
