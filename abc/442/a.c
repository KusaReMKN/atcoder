#include <stdio.h>

int
main(void)
{
	char s[11];
	int cnt;

	scanf("%s", s);
	cnt = 0;
	for (size_t i = 0; s[i] != '\0'; i++)
		if (s[i] == 'i' || s[i] == 'j')
			cnt++;
	printf("%d\n", cnt);

	return 0;
}
