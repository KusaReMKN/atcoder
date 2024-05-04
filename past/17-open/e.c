#include <stdio.h>

int
main(void)
{
	char s[200001];
	scanf("%s", s);

	int cur = s[0];
	int len = 1;
	for (int i = 1; s[i] != '\0'; i++)
		if (cur == s[i]) {
			len++;
		} else {
			printf("%c %d ", cur, len);
			cur = s[i];
			len = 1;
		}
	printf("%c %d ", cur, len);

	return 0;
}
