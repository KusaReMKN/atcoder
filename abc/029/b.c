#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[11];
	register int i, r;

	r = 0;
	for (i = 0; i < 12; i++)
		if (gets(s), strchr(s, 'r') != NULL)
			r++;
	printf("%d\n", r);
}
