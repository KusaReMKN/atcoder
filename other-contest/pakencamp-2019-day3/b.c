#include <stdio.h>

int
main(void)
{
	int n;
	char s[10];
	int black, white;

	scanf("%d", &n);
	black = white = 0;
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		if (s[0] == 'b')
			black++;
		else
			white++;
	}
	puts(black > white ? "black" : "white");

	return 0;
}
