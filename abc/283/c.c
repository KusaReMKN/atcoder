#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[100001], *p;
	int sum;

	scanf("%s", s);
	sum = 0;
	p = s;
	while (*p) {
		if (strncmp(p, "00", 2) == 0)
			p += 2;
		else
			p++;
		sum++;
	}
	printf("%d\n", sum);

	return 0;
}
