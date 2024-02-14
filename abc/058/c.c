#include <stdio.h>

int
main(void)
{
	int n;
	scanf("%d", &n);

#define MAPMAX	('z'-'a' + 1)
	int map[MAPMAX];
	for (int i = 0; i < MAPMAX; i++)
		map[i] = 9999;

	for (int i = 0; i < n; i++) {
		char s[51];
		scanf("%s", s);

		int tmp[MAPMAX] = { 0 };
		for (int i = 0; s[i] != '\0'; i++)
			tmp[s[i]-'a']++;

#define MIN(a, b)	((a) < (b) ? (a) : (b))
		for (int i = 0; i < MAPMAX; i++)
			map[i] = MIN(map[i], tmp[i]);
	}

	for (int i = 0; i < MAPMAX; i++)
		while (map[i]-- > 0)
			putchar(i+'a');
	putchar('\n');

	return 0;
}
