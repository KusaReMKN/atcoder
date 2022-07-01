#include <stdio.h>
#include <stdlib.h>

int
asc(const void *a, const void *b)
{
	return *(long *)a < *(long *)b ? -1 : 1;
}

int
main(void)
{
	long abcd[4];

	scanf("%ld%ld%ld%ld", abcd+0, abcd+1, abcd+2, abcd+3);
	qsort(abcd, 4, sizeof(abcd[0]), asc);
	if (abcd[0] + abcd[3] == abcd[1] + abcd[2]
			|| abcd[0] + abcd[1] + abcd[2] == abcd[3])
		puts("Yes");
	else
		puts("No");

	return 0;
}
