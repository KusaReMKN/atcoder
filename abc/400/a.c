#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	div_t d;
	int a;

	scanf("%d", &a);
	d = div(400, a);
	printf("%d\n", d.rem == 0 ? d.quot : -1);

	return 0;
}
