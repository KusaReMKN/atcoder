#include <stdio.h>

main()
{
	int c, p;
	char s[11] = { 0 };

	p = 0;
	while ((c = getchar()) != EOF)
		switch (c) {
		case '0':
		case '1':
			s[p++] = c;
			break;
		case 'B':
			if (p != 0)
				s[--p] = 0;
			break;
		}
	puts(s);
}
