#include <stdio.h>

int
main(void)
{
	int n;
	int v[20] = { 0 };

	scanf("%d", &n);
	for (int i = 0; i < 20; i++) {
		for (int j = i+1; j <= 10*20; j += 40)
			v[i] += j;
		for (int j = 200-i; j > 0; j -= 40)
			v[i] += j;
	}
	printf("%d\n", v[n-1]);

	return 0;
}
