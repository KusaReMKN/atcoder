#include <stdio.h>

int
main(void)
{
	int n;
	scanf("%d", &n);

	int a[200000];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	int b[200000];
	int ptr = 0;
	for (int i = 0; i < n; i++) {
		b[ptr++] = a[i];
		while (ptr > 1 && b[ptr-1] == b[ptr-2]) {
			b[ptr-2]++;
			ptr--;
		}
	}
	printf("%d\n", ptr);

	return 0;
}
