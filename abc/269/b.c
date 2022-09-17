#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[11], *p;
	int a, b, c, d;

	a = b = c = d = -1;
	b = 10;
	for (int i = 0; i < 10; i++) {
		gets(s);
		if (a == -1) {
			if ((p = strchr(s, '#')) != NULL)
				a = i+1,
				c = p-s+1,
				d = strrchr(s, '#')-s+1;
		}
		if (a != -1) {
			if (strchr(s, '#') == NULL) {
				b = i;
				break;
			}
		}
	}
	printf("%d %d\n%d %d", a, b, c, d);

	return 0;
}
