#include <stdio.h>

int
main(void)
{
	int c;
	int diff1, diff2, i;

	diff1 = diff2 = i = 0;
	while ((c = getchar()) != '\n') {
		diff1 += c == (i & 1 ? '0' : '1');
		diff2 += c == (i & 1 ? '1' : '0');
		i++;
	}
	printf("%d\n", diff1 < diff2 ? diff1 : diff2);

	return 0;
}
