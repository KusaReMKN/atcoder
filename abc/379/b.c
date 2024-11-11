#include <stdio.h>
#include <string.h>

int
main(void)
{
	int n, k;
	scanf("%d%d", &n, &k);

	char s[101];
	scanf("%s", s);

	char *p;
	p = strtok(s, "X");

	int cnt = 0;
	while (p != NULL) {
		cnt += strlen(p) / k;
		p = strtok(NULL, "X");
	}
	printf("%d\n", cnt);

	return 0;
}
