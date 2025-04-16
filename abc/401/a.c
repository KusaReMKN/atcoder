#include <stdio.h>

int
main(void)
{
	int s;

	scanf("%d", &s);
	puts(200 <= s && s <= 299 ? "Success" : "Failure");

	return 0;
}
