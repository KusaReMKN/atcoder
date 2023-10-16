#include <stdio.h>

int
main(void)
{
	int n;
	int m[10] = { 0 };

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		m[a] = 1;
	}
	for (int i = 0; i < 10; i++)
		if (m[i] > 0)
			printf("%d\n", i);

	return 0;
}
