#include <stdio.h>

int
main(void)
{
	int n, k;
	char s[2000];
	int r, w;

	scanf("%d%d%s", &n, &k, s);
	w = n-k;
	r = k;
	for (int i = 0; s[i] != '\0'; i++)
		--*(s[i] == 'R' ? &r : &w);
	puts(r == 0 ? "W" : "R");

	return 0;
}
