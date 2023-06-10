#include <stdio.h>

int
main(void)
{
	int n;
	int a;
	int max, index;

	scanf("%d", &n);
	index = -1;
	max = -1;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (max < a)
			max = a, index = i;
	}
	printf("%d\n", index + 1);

	return 0;
}
