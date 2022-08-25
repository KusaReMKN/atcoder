#include <stdio.h>

int
main(void)
{
	int n, h[100000];
	int prev;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &h[i]);
	prev = h[n-1];
	for (int i = n-2; i >= 0; i--) {
		if (h[i] > prev)
			if (--h[i] > prev)
				return puts("No"), 0;
		prev = h[i];
	}
	puts("Yes");

	return 0;
}
