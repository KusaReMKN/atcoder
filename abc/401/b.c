#include <stdio.h>
#include <string.h>

int
main(void)
{
	int c, l, n;
	char s[10];

	scanf("%d", &n);
	c = l = 0;
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		switch (s[3]) {
		case 'i':
			l = 1;
			break;
		case 'o':
			l = 0;
			break;
		case 'l':
			break;
		case 'v':
			if (!l)
				c++;
			break;
		}
	}
	printf("%d\n", c);

	return 0;
}
