#include <stdio.h>

int
main(void)
{
	char s[100];
	int cnt;

	scanf("%*d%s", s);
	cnt = 0;
	for (int i = 0; s[i]; i++)
		if (s[i] != (i & 1 ? 'O' : 'I'))
			cnt++;
	printf("%d\n", cnt);

	return 0;
}
