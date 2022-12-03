#include <stdio.h>
#include <string.h>

int
main(void)
{
	int h;
	char s[11], *p;
	int cnt;

	scanf("%d%*d", &h);
	cnt = 0;
	for (int i = 0; i < h; i++) {
		scanf("%s", s);
		p = s;
		while ((p = strchr(p, '#')) != NULL)
			cnt++, p++;
	}
	printf("%d\n", cnt);

	return 0;
}
