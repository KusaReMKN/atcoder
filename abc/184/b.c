#include <stdio.h>

int main(void)
{
	int n, x, i;

	scanf("%d%d\n", &n, &x);
	for (int i = 0; i < n; i++) {
		if (getchar() == 'o')
			x++;
		else
			x > 0 && x--;
	}
	printf("%d\n", x);
	return 0;
}
