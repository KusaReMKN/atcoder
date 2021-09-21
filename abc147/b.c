#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[101];
	int hug = 0;
	int len;
	int i;

	scanf("%s", s);
	len = strlen(s);
	for (i = 0; i < len / 2; i++)
		if (s[i] != s[len - 1 - i])
			hug++;
	printf("%d\n", hug);

	return 0;
}
