#include <stdio.h>

int
main(void)
{
	int p;
	scanf("%d", &p);

	long v[1001];
	v[1000] = 1789997546303;
	for (int i = 1000; i > 0; i--)
		v[i-1] = v[i] & 1 ? v[i]*3+1 : v[i]/2;
	printf("%ld\n", v[p]);

	return 0;
}
