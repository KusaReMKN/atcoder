#include <stdio.h>

int
main(void)
{
	int m, d;

	scanf("%d%d", &m, &d);
	if (m == 1 && d == 7
			|| m == 3 && d == 3
			|| m == 5 && d == 5
			|| m == 7 && d == 7
			|| m == 9 && d == 9)
		puts("Yes");
	else
		puts("No");

	return 0;
}
