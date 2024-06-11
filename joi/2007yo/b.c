#include <stdio.h>

int
main(void)
{
	int s[30] = { 0 };

	for (int i = 0; i < 28; i++) {
		int k;
		scanf("%d", &k);
		s[k-1] = 1;
	}
	for (int i = 0; i < 30; i++)
		if (!s[i])
			printf("%d\n", i+1);

	return 0;
}
