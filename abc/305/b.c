#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(void)
{
	char p, q;
	const char *str = "A__BC___DE____F________G";

	scanf("%c %c", &p, &q);
	printf("%d\n", abs((int)(strchr(str, p) - strchr(str, q))));

	return 0;
}
