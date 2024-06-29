#include <stdio.h>

int
main(void)
{
	int n;
	scanf("%d", &n);

	int c = 0;
	for (int i = 0; i < n; i++) {
		char t[2];
		int a;
		scanf("%s%d", t, &a);
		switch (t[0]) {
		case '+':
			c += a;
			break;
		case '-':
			c -= a;
			break;
		case '*':
			c *= a;
			break;
		}
		c += 10000;
		c %= 10000;
		printf("%d\n", c);
	}

	return 0;
}
