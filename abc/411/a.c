#include <stdio.h>
#include <string.h>

int
main(void)
{
	char p[101];
	size_t l, pl;

	scanf("%s%zu", p, &l);
	pl = strlen(p);
	puts(pl >= l ? "Yes" : "No");

	return 0;
}
