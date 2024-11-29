#include <stdio.h>
#include <string.h>

int
main(void)
{
	int n, k;
	scanf("%d%d", &n, &k);

	char delim[10] = { 0 };
	for (int i = 0; i < k; i++) {
		scanf("%hhd", &delim[i]);
		delim[i] += '0';
	}

	for (int i = n; ; i++) {
		char s[8], t[8];
		snprintf(s, sizeof(s), "%d", i);
		strcpy(t, s);

		char *p = strtok(t, delim);
		if (p != NULL && strcmp(p, s) == 0) {
			puts(s);
			return 0;
		}
	}

	return -1;
}
