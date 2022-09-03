#include <stdio.h>
#include <string.h>

int
main(void)
{
	char n[5], *p;
	int c;

	gets(n);
	p = n;
	c = 0;
	while ((p = strchr(p, '2')) != NULL)
		p++, c++;
	printf("%d\n", c);

	return 0;
}
