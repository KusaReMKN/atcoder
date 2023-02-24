#include <stdio.h>
#include <string.h>

int
main(void)
{
	int n;
	char s[101];
	char *p;
	int yes;

	scanf("%d%s", &n, s);
	yes = 0;
	if ((p = strchr(s, 'I')) != NULL)
		if ((p = strchr(p+1, 'O')) != NULL)
			if (strchr(p+1, 'I') != NULL)
				yes = 1;
	puts(yes ? "Yes" : "No");

	return 0;
}
