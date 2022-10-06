#include <stdio.h>

int
main(void)
{
	int n;
	int a[101010] = { 0 };
	int t;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		a[t-1 +1]++;
		a[t+0 +1]++;
		a[t+1 +1]++;
	}
	t = 0;
	for (int i = 0; i < 101010; i++)
		if (t < a[i])
			t = a[i];
	printf("%d\n", t);

	return 0;
}
