#include <stdio.h>

int
main(void)
{
	int w;
	const char *p = "DiscoPresentsDiscoveryChannelProgrammingContest2016";

	scanf("%d", &w);
	while (*p)
		p += printf("%.*s", w, p), printf("\n");

	return 0;
}
