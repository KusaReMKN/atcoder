#include <stdio.h>

int
main(void)
{
	int n, d, cnt;
	char s[101];

	scanf("%d%d%s", &n, &d, s);
	cnt = 0;
	for (int i = 0; i < n; i++)
		if (s[i] != '@')
			cnt++;
	printf("%d\n", cnt+d);

	return 0;
}
