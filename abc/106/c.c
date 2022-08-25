#include <stdio.h>

int
main(void)
{
	char s[101];
	int c;
	long k;

	scanf("%s%ld", s, &k);
	for (long i = 0; i < k; i++) {
		c = s[i];
		if (s[i] != '1')
			break;
	}
	printf("%c\n", c);

	return 0;
}
