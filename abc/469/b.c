#include <stdio.h>
#include <string.h>

int
main(void)
{
	int n;
	char s[110];
	int cnt;

	scanf("%d%s", &n, &s[1]);
	s[0] = s[n+1] = 'x';
	cnt = 0;
	for (int i = 1; i <= n; i++)
		if (strncmp("xxx", &s[i-1], 3) == 0)
			cnt++;
	printf("%d\n", cnt);

	return 0;
}
