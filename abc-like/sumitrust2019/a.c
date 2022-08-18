#include <stdio.h>

int
main(void)
{
	int m1, m2;

	scanf("%d%*d%d%*d", &m1, &m2);
	printf("%d\n", m1 != m2);

	return 0;
}
