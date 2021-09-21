#include <stdio.h>

int main(void)
{
	char s[4], t[4];
	int i;
	int sum = 0;

	scanf("%s%s", s, t);
	for (i = 0; i < 3; i++)
		if (s[i] == t[i])
			sum++;
	printf("%d\n", sum);

	return 0;
}
