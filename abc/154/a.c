#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[16], t[16];
	int a, b;
	char u[16];

	scanf("%s %s", s, t);
	scanf("%d %d", &a, &b);
	scanf("%s", u);

	if (!strcmp(s, u)) {
		printf("%d %d\n", a-1, b);
	}
	else {
		printf("%d %d\n", a, b-1);
	}
	return 0;
}
