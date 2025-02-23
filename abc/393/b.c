#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[1001] = { 0 };
	scanf("%s", s);

	int cnt = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] != 'A')
			continue;

		for (char *p = s+i; (p = strchr(p, 'B')) != NULL; p++) {
			int d = (int)(p-s) - i;
			if (s[i+2*d] == 'C')
				cnt++;
		}
	}
	printf("%d\n", cnt);

	return 0;
}
