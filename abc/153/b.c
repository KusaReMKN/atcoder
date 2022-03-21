#include <stdio.h>

int main(void)
{
	int h, n, t;
	int i;
	int s = 0;

	scanf("%d %d", &h, &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &t);
		s += t;
	}

	printf("%s\n", s >= h ? "Yes" : "No");

	return 0;
}
