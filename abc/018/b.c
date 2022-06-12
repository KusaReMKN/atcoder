#include <stdio.h>

void
reverse(char *begin, char *end)
{
	int tmp;
	while (begin < end) {
		tmp = *begin;
		*begin = *end;
		*end = tmp;
		begin++;
		end--;
	}
}

int
main(void)
{
	char s[101];
	int n, l, r;

	scanf("%s%d", s, &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &l, &r);
		reverse(s+l-1, s+r-1);
	}
	puts(s);

	return 0;
}
