#include <stdio.h>

int main(void)
{
	char s[10];

	scanf("%s", s);
	switch (s[0]) {
	case 'S':
		puts("Cloudy");
		break;
	case 'C':
		puts("Rainy");
		break;
	case 'R':
		puts("Sunny");
		break;
	}

	return 0;
}
