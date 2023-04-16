#include <stdio.h>

int
main(void)
{
	int n;
	char s[101];
	int ok, ng;

	scanf("%d%s", &n, s);
	ok = ng = 0;
	for (int i = 0; i < n; i++)
		switch (s[i]) {
		case 'o':
			ok++;
			break;
		case 'x':
			ng++;
			break;
		}
	puts(ok && !ng ? "Yes" : "No");

	return 0;
}
