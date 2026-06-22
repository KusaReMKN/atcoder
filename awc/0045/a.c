#include <stdio.h>

int
main(void)
{
	int n, p;
	char t[16];
	long sum;

	scanf("%d", &n);
	sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%s%d", t, &p);
		sum += p >> (t[0] == 'h');
	}
	printf("%ld\n", sum);

	return 0;
}
