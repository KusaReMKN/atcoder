#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sc {
	char s[17];
	int c;
};

static int
compar(const void *a, const void *b)
{
	return strcmp(((struct sc *)a)->s, ((struct sc *)b)->s);
}

int
main(void)
{
	int n, sum;
	struct sc sc[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%s%d", sc[i].s, &sc[i].c);
	qsort(sc, n, sizeof(sc[0]), compar);
	sum = 0;
	for (int i = 0; i < n; i++)
		sum += sc[i].c;
	sum %= n;
	puts(sc[sum].s);

	return 0;
}
