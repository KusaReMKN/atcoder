#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[1001];
	int k;

	scanf("%s%d", s, &k);
	k %= strlen(s);
	printf("%s", s + k);
	s[k] = '\0';
	printf("%s\n", s);

	return 0;
}
