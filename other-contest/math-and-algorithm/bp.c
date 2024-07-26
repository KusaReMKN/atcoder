#include <stdio.h>

int
main(void)
{
	int n;
	char s[500001];
	int nest;

	scanf("%d%s", &n, s);
	nest = 0;
	for (int i = 0; s[i] != '\0'; i++)
		switch (s[i]) {
		case '(':
			nest++;
			break;
		case ')':
			if (--nest < 0)
				goto quit;
			break;
		}
quit:
	puts(nest == 0 ? "Yes" : "No");

	return 0;
}
