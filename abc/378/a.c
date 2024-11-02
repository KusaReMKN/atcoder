#include <stdio.h>

int
main(void)
{
	int m[4] = { 0 };
	int a, s;

	for (int i = 0; i < 4; i++) {
		scanf("%d", &a);
		m[a-1]++;
	}
	s = 0;
	for (int i = 0; i < 4; i++)
		s += m[i] / 2;
	printf("%d\n", s);

	return 0;
}
