#include <stdio.h>

int main(void)
{
	int i, n;
	char s[16] = { 0 };
	int ac, wa, tle, re;

	ac = wa = tle = re = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", s);
		switch (s[0]) {
			case 'A': ac++; break;
			case 'W': wa++; break;
			case 'T': tle++; break;
			case 'R': re++; break;
		}
	}
	printf("AC x %d\nWA x %d\nTLE x %d\nRE x %d\n", ac, wa, tle, re);
	return 0;
}
