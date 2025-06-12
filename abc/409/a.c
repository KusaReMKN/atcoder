#include <stdio.h>

int
main(void)
{
	char t[101], a[101];

	scanf("%*d%s%s", t, a);
	for (int i = 0; t[i] != '\0'; i++)
		if (t[i] == 'o' && a[i] == 'o') {
			puts("Yes");
			return 0;
		}
	puts("No");

	return 0;
}
