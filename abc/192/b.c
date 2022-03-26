#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char s[1024];
	int i = 0;

	scanf("%s", s);
	while (s[i++])
		if (!(i & 1 ? islower : isupper)(s[i-1]))
			return puts("No"), 0;
	return puts("Yes"), 0;
}
