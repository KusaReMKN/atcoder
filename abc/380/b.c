#include <stdio.h>
#include <string.h>

int
main(void)
{
	char *p, s[101];

	scanf("%s", s);
	p = strtok(s, "|");
	do
		printf("%zu ", strlen(p));
	while ((p = strtok(NULL, "|")) != NULL);
	printf("\n");

	return 0;
}
