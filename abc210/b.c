#include <stdio.h>

int main(void)
{
	int i;

	scanf("%*d");
	for (i = 0; getchar() != '1'; i++);
	puts(i & 1 ? "Takahashi" : "Aoki");

	return 0;
}
