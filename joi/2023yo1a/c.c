#include <stdio.h>

int
main(void)
{
	char s[101];
	int cnt, pos;

	scanf("%*d%s", s);
	cnt = 0;
	pos = 1;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == 'L')
			pos--;
		else
			pos++;
		if (pos < 1)
			pos = 1;
		if (pos > 3)
			pos = 3;
		if (pos == 3)
			cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}
