#include <stdio.h>

int
main(void)
{
	int n;
	char c[2];
	long l;
	long p, t;
	char s[101];

	scanf("%d", &n);
	t = p = 0;
	for (int i = 0; i < n; i++) {
		scanf("%s%ld", c, &l);
		t += l;
		if (t > 100) {
			puts("Too Long");
			return 0;
		}
		while (p < t)
			s[p++] = c[0];
	}
	s[p] = '\0';
	puts(s);

	return 0;
}
