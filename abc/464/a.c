#include <stdio.h>

int
main(void)
{
	char s[100];
	int east, west;

	scanf("%s", s);
	east = west = 0;
	for (int i = 0; s[i] != '\0'; i++)
		if (s[i] == 'E')
			east++;
		else
			west++;
	puts(east > west ? "East" : "West");

	return 0;
}
