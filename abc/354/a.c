#include <stdio.h>

int
main(void)
{
	int h;

	scanf("%d", &h);
	for (int i = 0; ; i++)
		if (h < (1L<<i+1)-1)
			return printf("%d\n", i+1), 0;
	/* NOTREACHED */
}
