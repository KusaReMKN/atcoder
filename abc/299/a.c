#include <stdio.h>

int
main(void)
{
	char s[101];
	int in;

	scanf("%*d%s", s);
	in = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == '|')
			in = !in;
		if (s[i] == '*')
			return puts(in ? "in" : "out"), 0;
	}

	return -1;
}
