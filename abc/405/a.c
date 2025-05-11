#include <stdio.h>

int
main(void)
{
	int r, x, yes;

	scanf("%d%d", &r, &x);
	yes = 0;
	switch (x) {
	case 1:
		yes = 1600 <= r && r <= 2999;
		break;
	case 2:
		yes = 1200 <= r && r <= 2399;
		break;
	}
	puts(yes ? "Yes" : "No");

	return 0;
}
