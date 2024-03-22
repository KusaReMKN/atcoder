#include <stdio.h>

int
main(void)
{
	int a, s;

	scanf("%d%d", &a, &s);
	puts(a < s
		? "Enjoy another semester..."
		: "Congratulations!");

	return 0;
}
