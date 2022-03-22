#include <stdio.h>

int main(void)
{
	int s, w;

	scanf("%d%d", &s, &w);
	if (s <= w) return puts("unsafe"), 0;
	return puts("safe"), 0;
}
