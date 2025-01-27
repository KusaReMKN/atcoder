#include <stdio.h>

int
main(void)
{
	int n;
	scanf("%d", &n);

	long a0, a;
	scanf("%ld%ld", &a0, &a);

	int yes = 1;
	for (int i = 2; i < n; i++) {
		long a1;
		scanf("%ld", &a1);
		if (a*a != a0*a1)
			yes = 0;
		a0 = a;
		a = a1;
	}
	puts(yes ? "Yes" : "No");

	return 0;
}
