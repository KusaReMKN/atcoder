#include <stdio.h>

int
main(void)
{
	int n, s, t;
	scanf("%d%d%d", &n, &s, &t);

	int sum = 0;
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		sum += a;
	}

	if (sum > (t-s)*60)
		puts("No");
	else
		puts("Yes");

	return 0;
}
