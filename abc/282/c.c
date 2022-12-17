#include <stdio.h>

int
main(void)
{
	int n;
	char s[200001];
	int inside;

	scanf("%d%s", &n, s);
	inside = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '"')
			inside = !inside;
		if (s[i] == ',' && !inside)
			s[i] = '.';
	}
	puts(s);

	return 0;
}
