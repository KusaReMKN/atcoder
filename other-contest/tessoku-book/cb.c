#include <stdio.h>

int
main(void)
{
	int n;
	int a[100];

	(void)scanf("%d", &n);
	for (int i = 0; i < n; i++)
		(void)scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
		for (int j = i+1; j < n; j++)
			for (int k = j+1; k < n; k++)
				if (a[i]+a[j]+a[k] == 1000) {
					puts("Yes");
					goto quit;
				}
	puts("No");
quit:
	return 0;
}
