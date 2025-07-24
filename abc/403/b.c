#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>

#define MIN(a, b)	((a) < (b) ? (a) : (b))

int
main(void)
{
	char t[11], u[11];
	char *p;

	scanf("%s%s", t, u);
	p = t;
	while (p = MIN(strchrnul(p, u[0]), strchrnul(p, '?')), *p != '\0') {
		int yes = 1;
		for (int i = 0; u[i] != '\0'; i++)
			if (u[i] != p[i] && '?' != p[i]) {
				yes = 0;
				break;
			}
		if (yes) {
			puts("Yes");
			return 0;
		}
		p++;
	}
	puts("No");

	return 0;
}
