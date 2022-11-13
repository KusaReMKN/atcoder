#include <stdio.h>
#include <stdlib.h>

static int
chkPattern(const char *s)
{
	return (s[0] == 'H' || s[0] == 'D' || s[0] == 'C' || s[0] == 'S')
		&& (s[1] == 'A' || s[1] >= '2' && s[1] <= '9' || s[1] == 'T'
				|| s[1] == 'J' || s[1] == 'Q' || s[1] == 'K');
}

int
main(void)
{
	int n;
	char s[52][3];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", s[i]);
		if (!chkPattern(s[i]))
			return puts("No"), 0;
	}
	for (int i = 0; i < n; i++)
		for (int j = i+1; j < n; j++)
			if (strcmp(s[i], s[j]) == 0)
				return puts("No"), 0;
	puts("Yes");

	return 0;
}
