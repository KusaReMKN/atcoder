#include <stdio.h>

int
main(void)
{
	int n, a;
	int v[2000] = { 0 };
	int ind, min;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		v[a-1]++;
	}
	min = 101;
	for (int i = 0; i < 2000; i++)
		if (v[i] && v[i] < min) {
			min = v[i];
			ind = i;
		}
	printf("%d\n", ind+1);

	return 0;
}
