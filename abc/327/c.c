#include <stdio.h>

int
main(void)
{
	int a[9][9];

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			scanf("%d", &a[i][j]);

	for (int i = 0; i < 9; i++) {
		int f = 0;
		for (int j = 0; j < 9; j++)
			f |= 1 << a[i][j] - 1;
		if (f != 0x1FF)
			return puts("No"), 0;
	}
	for (int j = 0; j < 9; j++) {
		int f = 0;
		for (int i = 0; i < 9; i++)
			f |= 1 << a[i][j] - 1;
		if (f != 0x1FF)
			return puts("No"), 0;
	}
	for (int i = 0; i < 9; i++) {
		int f = 0;
		for (int j = 0; j < 9; j++) {
			f |= 1 << a[i/3*3+j/3][i%3*3+j%3] - 1;
		}
		if (f != 0x1FF)
			return puts("No"), 0;
	}
	puts("Yes");

	return 0;
}
