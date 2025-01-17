#include <stdio.h>

int
main(void)
{
	char s[200001];
	int depth;

	scanf("%s", s);
	depth = 0;
	for (int i = 0; s[i] != '\0'; i++)
		switch (s[i]) {
		case '(':
			depth++;
			break;
		case ')':
			if (--depth < 0)
				goto quit;
			break;
		}
quit:
	puts(depth == 0 ? "Yes" : "No");

	return 0;
}
