#include <stdio.h>
#include <string.h>

int
main(void)
{
	int n, q;
	char s[500001];
	int t, x;
	int p;

	scanf("%d%d%s", &n, &q, s);
	p = 0;
	for (int i = 0; i < q; i++) {
		scanf("%d%d", &t, &x);
		switch (t) {
		case 1:
			p = (p + n - x) % n;
			break;
		case 2:
			printf("%c\n", s[(p+x-1)%n]);
			break;
		}
	}

	return 0;
}
