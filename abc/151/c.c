#include <stdio.h>

struct z {
	long wa;
	long ac;
};

int
main(void)
{
	int n, m, p;
	char s[4];
	struct z z[100000] = { { 0 } };
	long ac, wa;

	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d%s", &p, s);
		switch (s[0]) {
		case 'A':
			z[p-1].ac = 1;
			break;
		case 'W':
			z[p-1].ac || z[p-1].wa++;
			break;
		}
	}
	wa = ac = 0;
	for (int i = 0; i < n; i++) {
		z[i].ac && (wa += z[i].wa);
		ac += z[i].ac;
	}
	printf("%ld %ld\n", ac, wa);

	return 0;
}
