#include <stdio.h>

int main(void)
{
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);
	if (a < b) return puts("Aoki"), 0;
	if (a > b) return puts("Takahashi"), 0;
	if (c == 0) return puts("Aoki"), 0;
	puts("Takahashi");
	return 0;
}
