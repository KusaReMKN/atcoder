#include <stdio.h>
#include <stdlib.h>

struct score {
	int score;
	int i;
};

int comp(const void *a, const void *b)
{
	int _a = ((const struct score *)a)->score;
	int _b = ((const struct score *)b)->score;
	return _b - _a;
}

int main(void)
{
	int n, i;
	struct score a[200000];

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		a[i].i = i + 1;
		scanf("%d", &a[i].score);
	}
	qsort(a, n, sizeof(a[0]), comp);
	printf("%d\n", a[1].i);

	return 0;
}
