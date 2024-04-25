#include <stdio.h>
#include <string.h>

int
main(void)
{
	int n;
	scanf("%d", &n);
	if (n & 1)
		return puts("-1"), 0;

	char s[101];
	scanf("%s", s);
	char t[51];
	strcpy(t, s+n/2);
	s[n/2] = '\0';

	int cnt = 0;
	for (int i = 0; i < n/2; i++)
		if (s[i] != t[i])
			cnt++;
	printf("%d\n", cnt);

	return 0;
}
