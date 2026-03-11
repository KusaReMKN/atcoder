#include <stdio.h>

int
main(void)
{
	int w, r;

	scanf("%d%d", &w, &r);
	if (r)
		puts("absent");
	else if (w)
		puts("late");
	else
		puts("attend");

	return 0;
}
