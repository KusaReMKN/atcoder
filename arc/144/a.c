#include <stdio.h>

int
main(void)
{
	int n;
	char x[100001];

	scanf("%d", &n);
	for (int i = 0; i < n/4; i++)
		x[i] = '4', x[i+1] = '\0';
	printf("%d\n", 2*n);
	if (n % 4 > 0)
		printf("%d", n%4);
	puts(x);

	return 0;
}
