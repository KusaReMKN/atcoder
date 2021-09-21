#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a[11], b[11], c[11];

	scanf("%s%s%s", a, b, c);
	printf("%c%c%c\n", toupper(a[0]), toupper(b[0]), toupper(c[0]));

	return 0;
}
