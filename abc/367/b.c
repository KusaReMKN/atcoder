#include <stdio.h>
#include <string.h>

int
main(void)
{
	char x[10];

	scanf("%s", x);
	for (int i = 0; i < 3; i++)
		if (x[strlen(x)-1] == '0')
			x[strlen(x)-1] = '\0';
	if (x[strlen(x)-1] == '.')
		x[strlen(x)-1] = '\0';
	puts(x);

	return 0;
}
