#include <stdio.h>

int
main(void)
{
	int n;
	scanf("%d", &n);

	int sum = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		char s[5];
		scanf("%d%d%s", &a, &b, s);
		if (s[0] == 'k')
			sum += b - a;
	}
	printf("%d\n", sum);

	return 0;
}
