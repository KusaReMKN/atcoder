#include <stdio.h>
#include <string.h>

int
main(void)
{
	int k;
	char s[1001];

	scanf("%*d%d%s", &k, s);
	printf("%u\n", (unsigned)(strchr(s+k, 'o') - s + 1));

	return 0;
}
