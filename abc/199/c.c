#include <stdio.h>
#include <string.h>

int main(void)
{
	unsigned long long n, q, t, a, b, i;
	char buf[700100] = { 0 };
	char *s = buf;
	int temp;

	scanf("%llu%s%llu", &n, s, &q);
	for (i = 0; i < q; i++) {
		scanf("%llu%llu%llu", &t, &a, &b);
		a--, b--;
		switch (t) {
		case 1:
			temp = s[a];
			s[a] = s[b];
			s[b] = temp;
			break;
		case 2:
			if (s == buf) {
				memmove(buf + 2 * n, buf, n);
				s = s + n;
			} else {
				memmove(buf, buf + 2 * n, n);
				s = buf;
			}
			s[2 * n] = 0;
			break;
		}
	}
	puts(s);

	return 0;
}
