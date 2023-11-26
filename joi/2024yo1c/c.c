#include <stdio.h>

int
main(void)
{
	int n;
	char s[101];

	scanf("%d%s", &n, s);
	for (int i = 0; i < n; i++)
		if (s[i] != s[0])
			return puts("No"), 0;
	puts("Yes");

	return 0;
}
