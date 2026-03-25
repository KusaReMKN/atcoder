#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[101], t[256];
	int n[256] = { 0 }, p;
	int max;

	scanf("%s", s);
	for (int i = 0; s[i] != '\0'; i++)
		n[s[i]]++;
	p = 0;
	for (int i = 0; i < 256; i++) {
		if (max < n[i]) {
			max = n[i];
			p = 0;
		}
		if (max == n[i])
			t[p++] = i;
	}
	t[p] = '\0';
	fputs(t, stderr);
	for (int i = 0; s[i] != '\0'; i++)
		if (strchr(t, s[i]) == NULL)
			putchar(s[i]);
	putchar('\n');

	return 0;
}
