#include <stdio.h>

int
main(void)
{
	int c, n, p;
	char s[101];

	scanf("%s", s);
	c = n = p = 0;
	while (s[p] != '\0') {
		if (s[p] != "io"[c&1])
			n++;
		else
			p++;
		c++;
	}
	if (s[p-1] == 'i')
		n++;
	printf("%d\n", n);

	return 0;
}
