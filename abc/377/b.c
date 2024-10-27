#include <stdio.h>
#include <string.h>

int
main(void)
{
	int cnt;
	char s[8][9];

	for (int i = 0; i < 8; i++)
		scanf("%s", s[i]);
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if (s[i][j] == '#')
				for (int k = 0; k < 8; k++) {
					if (s[i][k] == '.')
						s[i][k] = '@';
					if (s[k][j] == '.')
						s[k][j] = '@';
				}
	cnt = 0;
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if (s[i][j] == '.')
				cnt++;
	printf("%d\n", cnt);

	return 0;
}
