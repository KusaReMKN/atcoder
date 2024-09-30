#include <stddef.h>
#include <stdio.h>
#include <string.h>

#define ABS(x)	((x) < 0 ? -(x) : (x));

int
main(void)
{
	ptrdiff_t sum;
	char *cur, *next, s[27];

	scanf("%s", s);
	cur = strchr(s, 'A');
	sum = 0;
	for (int c = 'B'; c <= 'Z'; c++) {
		next = strchr(s, c);
		sum += ABS(next - cur);
		cur = next;
	}
	printf("%td\n", sum);

	return 0;
}
