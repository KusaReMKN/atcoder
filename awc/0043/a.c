#include <stdio.h>

int
main(void)
{
	unsigned long n, m;
	int a;

	scanf("%lu%lu", &n, &m);
	for (unsigned long i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);
		m = m * a / 100;
	}
	printf("%lu\n", m);

	return 0;
}
