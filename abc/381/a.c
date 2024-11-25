#include <stdio.h>

int
main(void)
{
	int n, ok;
	char s[101];

	scanf("%d%s", &n, s);
	ok = 1;
	if (s[n/2] != '/' || n%2 != 1)
		ok = 0;
	for (int i = 0; i < n/2; i++)
		if (s[i] != '1')
			ok = 0;
	for (int i = n/2 + 1; i < n; i++)
		if (s[i] != '2')
			ok = 0;
	puts(ok ? "Yes" : "No");

	return 0;
}
