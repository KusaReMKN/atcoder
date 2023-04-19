#include <stdio.h>

static int
isPalindrome(const char *s)
{
	int head, tail;

	head = tail = 0;
	while (s[tail])
		tail++;
	--tail;
	while (head < tail)
		if (s[head++] != s[tail--])
			return 0;

	return 1;
}

int
main(void)
{
	int n;
	char buf[40] = { 0 };
	int cur;

	scanf("%d", &n);
	cur = 0;
	while (n > 0) {
		buf[cur++] = '0' + (n & 1);
		n >>= 1;
	}
	buf[cur] = '\0';
	fprintf(stderr, "%s", buf);
	puts(isPalindrome(buf) ? "Yes" : "No");

	return 0;
}
