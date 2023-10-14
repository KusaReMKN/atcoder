#include <stdio.h>

int
main(void)
{
	char s[101], t[101];
	int d;

	scanf("%*d%s%s", s, t);
	d = 0;
	for (int i = 0; s[i] != '\0'; i++)
		if (s[i] != t[i])
			d++;
	printf("%d\n", d);

	return 0;
}
