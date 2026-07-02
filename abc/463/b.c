#include <stdio.h>

int
main(void)
{
	int n;
	char x, s[6];

	scanf("%d %c", &n, &x);
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		if (s[x-'A'] == 'o') {
			puts("Yes");
			return 0;
		}
	}
	puts("No");

	return 0;
}
