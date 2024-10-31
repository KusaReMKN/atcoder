#include <stdio.h>

int
main(void)
{
	char s[101], t[101];
	scanf("%s%s", s, t);

	int m = 0;
	for (int i = 0; s[i] != '\0'; i++)
		if (s[i] != t[i])
			m++;
	printf("%d\n", m);

	int i;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] > t[i]) {
			s[i] = t[i];
			puts(s);
		}
	for (i--; i >= 0; i--)
		if (s[i] != t[i]) {
			s[i] = t[i];
			puts(s);
		}

	return 0;
}
