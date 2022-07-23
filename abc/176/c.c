#include <stdio.h>

int
main(void)
{
	int n, a;
	long max, s;

	scanf("%d", &n);
	scanf("%ld", &max);
	s = 0;
	for (int i = 1; i < n; i++) {
		scanf("%d", &a);
		if (a < max)
			s += max - a;
		else
			max = a;
	}
	printf("%ld\n", s);

	return 0;
}
