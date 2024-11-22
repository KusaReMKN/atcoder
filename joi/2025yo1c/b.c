#include <stdio.h>

int
main(void)
{
	int x, s;

	s = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &x);
		s += x;
	}
	printf("%d\n", s > 21 ? 0 : 1);

	return 0;
}
