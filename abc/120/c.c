#include <stdio.h>

int
main(void)
{
	char s[100001];
	int r, b;

	gets(s);
	r = b = 0;
	for (int i = 0; s[i]; i++)
		++*(s[i] == '0' ? &r : &b);
	printf("%d\n",  2 * (r < b ? r : b));

	return 0;
}
