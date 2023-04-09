#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[10];
	int bx, by, rx, ry;

	scanf("%s", s);
	bx = strchr(s, 'B') - s;
	by = strchr(s+bx+1, 'B') - s;
	if ((bx + by) % 2 == 0)
		return puts("No"), 0;

	rx = strchr(s, 'R') - s;
	ry = strchr(s+rx+1, 'R') - s;
	for (int i = rx+1; i < ry; i++)
		if (s[i] == 'K')
			return puts("Yes"), 0;
	puts("No");

	return 0;
}
