#include <stdio.h>

int
main(void)
{
	int n, p;
	int q[200000];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &p), q[p-1] = i+1;

	for (int i = 0; i < n; i++)
		printf("%s%d", i == 0 ? "" : " ", q[i]);

	return 0;
}
