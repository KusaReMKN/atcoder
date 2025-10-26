#include <stdio.h>

int
main(void)
{
	int n, m;

	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
		puts(i < m ? "OK" : "Too Many Requests");

	return 0;
}
