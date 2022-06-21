#include <stdio.h>

int
main(void)
{
	int k;

	scanf("%d", &k);
	for (int i = 0; i < k; i++)
		printf("%s", "ACL");
	putchar('\n');

	return 0;
}
