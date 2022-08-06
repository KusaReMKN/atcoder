#include <stdio.h>

int
main(void)
{
	int n;
	int p[51];
	int pp, gen;

	scanf("%d", &n);
	for (int i = 2; i <= n; i++)
		scanf("%d", &p[i]);
	pp = n;
	for (gen = 1; (pp = p[pp]) != 1; gen++)
		;
	printf("%d\n", gen);

	return 0;
}
