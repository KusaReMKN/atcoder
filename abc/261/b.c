#include <stdio.h>

int
main(void)
{
	int n;
	char a[1001][1001];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%s", a[i]);
	for (int i = 0; i < n; i++)
		for (int j = i+1; j < n; j++)
			switch (a[i][j]) {
			case 'D':
				if (a[j][i] != 'D')
					goto incorrect;
				break;
			case 'W':
				if (a[j][i] != 'L')
					goto incorrect;
				break;
			case 'L':
				if (a[j][i] != 'W')
					goto incorrect;
				break;
			}
	if (0) {
incorrect:
		puts("incorrect");
	} else {
		puts("correct");
	}


	return 0;
}
