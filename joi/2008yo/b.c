#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[10001];
	char *p;
	int cnt;

	scanf("%s", s);
	p = s;
	cnt = 0;
	while ((p = strstr(p, "JOI")) != NULL)
		cnt++, p++;
	printf("%d\n", cnt);
	p = s;
	cnt = 0;
	while ((p = strstr(p, "IOI")) != NULL)
		cnt++, p++;
	printf("%d\n", cnt);

	return 0;
}
