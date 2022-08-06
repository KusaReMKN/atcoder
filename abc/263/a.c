#include <stdio.h>
#include <stdlib.h>

int
asc(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int
main(void)
{
	int v[5];

	for (int i = 0; i < 5; i++)
		scanf("%d", &v[i]);
	qsort(v, 5, sizeof(v[0]), asc);
	if (v[0] == v[1] && (v[1] != v[2] && v[2] == v[3]
			|| v[1] == v[2] &&  v[2] != v[3]) && v[3] == v[4])
		puts("Yes");
	else
		puts("No");

	return 0;
}
