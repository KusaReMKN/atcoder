#include <stdio.h>

int
main(void)
{
	int n, yes;
	char s[500001], t[500001];

	scanf("%d%s%s", &n, s, t);
	yes = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '?' && t[i] == '?')
			continue;
		if (s[i] == '?' && t[i] != '?')
			s[i] = t[i];
		if (s[i] != t[i] && t[i] != '?')
			yes = s[i] = '!';
	}
	puts(s);
	puts(yes ? "Yes" : "No");

	return 0;
}
