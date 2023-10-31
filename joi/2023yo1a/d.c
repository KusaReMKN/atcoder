#include <stdio.h>

int
main(void)
{
	int n, a, s;

	scanf("%d", &n);
	s = 0;
	for (int i = 0; i < 2*n-1; i++) {
		scanf("%d", &a);
		s ^= a;
	}
	printf("%d\n", s);

	return 0;
}
