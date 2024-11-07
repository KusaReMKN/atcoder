#include <stdio.h>

int
main(void)
{
	int swin, twin;
	char s[101], t[101];

	scanf("%*d%s%s", s, t);
	swin = twin = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == t[i])
			continue;
		if (s[i] == 'S' && t[i] == 'P')
			swin++;
		else
			twin++;
	}
	printf("%d %d\n", swin, twin);

	return 0;
}
