#include <stdio.h>

int main(void)
{
	int h, w, x, y;
	char s[128], s1[128], s2[128];
	int n = 0;
	int i;

	scanf("%d%d%d%d", &h, &w, &x, &y);
	for (i = 1; i <= h; i++) {
		scanf("%s", s);
		s1[i] = s[y-1];
		if (i == x) strcpy(s2 + 1, s);
	}
	s1[i] = 0;
	s1[0] = '-'; s2[0] = '-';

	s1[x] = '!'; s2[y] = '!';

	for (i = x - 1; i > 0 && s1[i] != '#'; i--) n++;
	for (i = x;     i <= h && s1[i] != '#'; i++) n++;
	for (i = y;     i > 0 && s2[i] != '#'; i--) n++;
	for (i = y + 1; i <= w && s2[i] != '#'; i++) n++;
	n--;

	printf("%d\n", n);

	return 0;
}
