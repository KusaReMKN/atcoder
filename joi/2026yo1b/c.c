#include <stdio.h>
#include <string.h>

int
main(void)
{
	int cnt;
	char s[101];

	scanf("%*d%s", s);
	cnt = 0;
	for (int i = 0; s[i] != '\0'; i++)
		if (strncmp(s+i, "AOI", 3) == 0
				|| strncmp(s+i, "IOI", 3) == 0)
			cnt++;
	printf("%d\n", cnt);

	return 0;
}
