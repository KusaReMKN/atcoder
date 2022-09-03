#include <stdio.h>

int
main(void)
{
	char daytab[] = "rheuo";
	char s[16];

	gets(s);
	printf("%d\n", strchr(daytab, s[1])-daytab + 1);

	return 0;
}
