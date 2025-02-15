#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s1[5], s2[5];

	scanf("%s%s", s1, s2);
	if (strcmp(s1, "sick") == 0 && strcmp(s2, "sick") == 0)
		puts("1");
	if (strcmp(s1, "sick") == 0 && strcmp(s2, "sick") != 0)
		puts("2");
	if (strcmp(s1, "sick") != 0 && strcmp(s2, "sick") == 0)
		puts("3");
	if (strcmp(s1, "sick") != 0 && strcmp(s2, "sick") != 0)
		puts("4");

	return 0;
}
