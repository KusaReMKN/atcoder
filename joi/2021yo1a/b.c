#include <stdio.h>

int
main(void)
{
	char s[101];
	int j, o, i;

	scanf("%*d%s", s);
	j = o = i = 0;
	for (int k = 0; s[k] != '\0'; k++)
		switch (s[k]) {
		case 'J':
			j++;
			break;
		case 'O':
			o++;
			break;
		case 'I':
			i++;
			break;
		}
	for (int k = 0; k < j; k++)
		putchar('J');
	for (int k = 0; k < o; k++)
		putchar('O');
	for (int k = 0; k < i; k++)
		putchar('I');
	putchar('\n');

	return 0;
}
