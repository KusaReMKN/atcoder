#include <stdio.h>

int
main(void)
{
	int p[4][2];
	int ax, ay, bx, by;

	for (int i = 0; i < 4; i++)
		scanf("%d%d", &p[i][0], &p[i][1]);
	for (int i = 0; i < 4; i++) {
		ax = p[i+2&3][0] - p[i+1&3][0];
		ay = p[i+2&3][1] - p[i+1&3][1];
		bx = p[i+0&3][0] - p[i+1&3][0];
		by = p[i+0&3][1] - p[i+1&3][1];
		if (ax*by - ay*bx <= 0)
			return puts("No"), 0;
	}
	puts("Yes");

	return 0;
}
