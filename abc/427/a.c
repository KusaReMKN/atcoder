#include <stdio.h>
#include <stdio.h>

int
main(void)
{
	char s[10];

	scanf("%s", s);
	s[strlen(s)/2] = '\0';
	printf("%s%s\n", s, s+strlen(s)+1);

	return 0;
}
