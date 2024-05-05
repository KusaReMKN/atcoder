#include <stdio.h>

int
main(void)
{
	char s[200001], t[200001];

	scanf("%s%s", s, t);
	int cur = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		while (s[i] != t[cur++])
			;
		printf("%d ", cur);
	}
	printf("\n");

	return 0;
}
