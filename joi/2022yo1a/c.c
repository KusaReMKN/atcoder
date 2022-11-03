#include <stdio.h>

int
main(void)
{
	char s[101];
	int v[5] = { 0 };
	int cnt;

	scanf("%*d%s", s);
	for (int i = 0; s[i]; i++)
		v[s[i] - 'A']++;
	cnt = 0;
	for (int i = 0; i < 5; i++)
		if (v[i])
			cnt++;
	puts(cnt >= 3 ? "Yes" : "No");

	return 0;
}
