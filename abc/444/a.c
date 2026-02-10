#include <stdio.h>

int
main(void)
{
	char n[4];

	scanf("%s", n);
	for (int i = 1; i < 3; i++)
		if (n[i-1] != n[i])
			return puts("No"), 0;
	puts("Yes");

	return 0;
}
