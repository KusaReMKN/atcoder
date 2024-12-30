#include <stdio.h>
#include <stdlib.h>

static int
compar(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int
main(void)
{
	int cards[4];

	for (int i = 0; i < 4; i++)
		scanf("%d", &cards[i]);
	qsort(cards, 4, sizeof(cards[0]), compar);
	if (cards[0] == cards[1] && cards[1] == cards[2] && cards[2] != cards[3]
			|| cards[0] == cards[1] && cards[1] != cards[2] && cards[2] == cards[3]
			|| cards[0] != cards[1] && cards[1] == cards[2] && cards[2] == cards[3])
		puts("Yes");
	else
		puts("No");

	return 0;
}
