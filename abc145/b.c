#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	char s[101];

	scanf("%d%s", &n, s);
	if (n & 1) {
		puts("No");
		return 0;
	}
	if (!memcmp(s, s + n / 2, n / 2))
		puts("Yes");
	else
		puts("No");

	return 0;
}
