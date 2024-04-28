#include <stdio.h>

int
main(void)
{
	int n;
	char a[100][100];
	char b[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%s", a[i]);
	for (int i = 0; i < n; i++) {
		scanf("%s", b);
		for (int j = 0; j < n; j++) {
			if (a[i][j] != b[j]) {
				printf("%d %d\n", i+1, j+1);
				return 0;
			}
		}
	}

	return -1;
}
