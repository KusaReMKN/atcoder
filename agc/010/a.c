#include <stdio.h>

int
main(void)
{
	int n;
	long a;
	int odds;

	scanf("%d", &n);
	odds = 0;
	for (int i = 0; i < n; i++) {
		scanf("%ld", &a);
		if (a & 1)
			odds++;
	}
	puts(odds & 1 ? "NO" : "YES");

	return 0;
}
