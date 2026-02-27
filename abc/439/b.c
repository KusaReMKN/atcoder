#include <stdio.h>

static int
f(int n)
{
	int r = 0;

	for (; n > 0; n /= 10) {
		int c = n % 10;
		r += c * c;
	}

	return r;
}

int
main(void)
{
	int n;
	int s[2026] = { 0 };

	scanf("%d", &n);
	do {
		n = f(n);
		if (n == 1)
			return puts("Yes"), 0;
	} while (s[n]++ == 0);
	puts("No");

	return 0;
}
