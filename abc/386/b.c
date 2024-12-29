#include <stdio.h>
#include <string.h>

int
main(void)
{
	int cnt;
	char s[1001], *p;

	scanf("%s", s);
	cnt = 0;
	for (p = s; *p != '\0'; p++) {
		if (strstr(p, "00") == p)
			p++;
		cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}
