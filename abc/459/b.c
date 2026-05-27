#include <stdio.h>

int
main(void)
{
	int n;
	char s[11];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		if (s[0] <= 'c')
			putchar('2');
		else if (s[0] <= 'f')
			putchar('3');
		else if (s[0] <= 'i')
			putchar('4');
		else if (s[0] <= 'l')
			putchar('5');
		else if (s[0] <= 'o')
			putchar('6');
		else if (s[0] <= 's')
			putchar('7');
		else if (s[0] <= 'v')
			putchar('8');
		else
			putchar('9');
	}
	putchar('\n');

	return 0;
}
