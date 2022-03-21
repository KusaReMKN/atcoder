#include <stdio.h>

int main(void)
{
	int h, a, r;

	scanf("%d %d", &h, &a);

	r = h / a;
	if (h % a)
	{
		r++;
	}

	printf("%d", r);
	return 0;
}
