#include <stdio.h>

int
main(void)
{
	int ok, t[256] = { 0 };
	char s[101] = { 0 };

	scanf("%s", s);
	ok = 1;
	for (int i = 0; s[i] != '\0'; i += 2)
		if (s[i+0] != s[i+1] || t[s[i]] != 0)
			ok = 0;
		else
			t[s[i]]++;
	puts(ok ? "Yes" : "No");

	return 0;
}
