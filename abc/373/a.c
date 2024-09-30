#include <stdio.h>
#include <string.h>

int
main(void)
{
	int cnt;

	cnt = 0;
	for (int i = 1; i <= 12; i++) {
		char s[101];
		scanf("%s", s);
		if (strlen(s) == i)
			cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}
