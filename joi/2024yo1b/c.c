#include <stdio.h>

int
main(void)
{
	char s[101];
	int cnt;

	scanf("%*d%s", s);
	cnt = 0;
	for (int i = 0; s[i] != '\0'; i++)
		cnt += 1 + (s[i] != 'o');
	printf("%d\n", cnt);

	return 0;
}
