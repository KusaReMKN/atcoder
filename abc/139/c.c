#include <stdio.h>

int main(void)
{
	int n;
	int h, prev = 0;
	int i;
	int step = 0;
	int max = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &h);
		if (prev < h)
			step = 0;
		else
			step++;
		prev = h;
		if (max < step)
			max = step;
	}
	printf("%d\n", max);

	return 0;
}
