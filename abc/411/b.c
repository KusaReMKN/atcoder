#include <stdio.h>

int
main(void)
{
	int n, d;
	int s[51];

	scanf("%d", &n);
	s[0] = 0;
	for (int i = 0; i < n-1; i++) {
		scanf("%d", &d);
		s[i+1] = s[i+0] + d;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++)
			printf("%d ", s[j] - s[i]);
		printf("\n");
	}

	return 0;
}
