#include <stdio.h>
#include <math.h>

int
main(void)
{
	int a, b;
	int min8, min10, max8, max10;

	scanf("%d%d", &a, &b);
	for (int i = 0; i * 8/100 <= a && i * 10/100 <= b; i++)
		if (i * 8/100 == a && i * 10/100 == b) {
			printf("%d\n", i);
			return 0;
		}
	puts("-1");

	return 0;
}
