#include <stdio.h>

int
main(void)
{
	int a[4][4];

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			scanf("%d", &a[i][j]);
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 3; j++)
			if (a[i][j+0] == a[i][j+1])
				return puts("CONTINUE"), 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
			if (a[i+0][j] == a[i+1][j])
				return puts("CONTINUE"), 0;
	puts("GAMEOVER");

	return 0;
}
