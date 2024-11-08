#include <stdio.h>

int
main(void)
{
	int cnt;
	char s[100001];

	scanf("%s", s);
	cnt = 0;
	for (int i = 1; s[i] != '\0'; i++)
		if (s[i-1] != s[i-0])
			cnt++;
	printf("%d\n", cnt);

	return 0;
}
