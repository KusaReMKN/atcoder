#include <stdio.h>
#include <string.h>

int
main(void)
{
	char *p, s[200001];
	int cnt;

	scanf("%*d%s", s);
	cnt = 0;
	p = s;
	while ((p = strstr(p, "#.#")) != NULL)
		cnt++, p++;
	printf("%d\n", cnt);

	return 0;
}
