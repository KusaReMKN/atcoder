#include <stdio.h>
#include <string.h>

const char *t = "atcoder";

int
atsort(int c, int d)
{
	return strchr(t, c) - strchr(t, d);
}

int
main(void)
{
	int r;
	int z;
	char s[8];

	gets(s);
	r = 0;
	while (strcmp(s, t)) {
		for (int i = 1; i < 7; i++)
			if (atsort(s[i-1], s[i]) > 0) {
				r++;
				z = s[i-1];
				s[i-1] = s[i];
				s[i] = z;
			}
	}
	printf("%d\n", r);

	return 0;
}
