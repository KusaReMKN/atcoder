#include <stdio.h>

int
main(void)
{
	int n;
	int a[10];
	int v[11] = { 0 };

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		v[a[i]]++;
	}
	for (int i = 1; i <= 10; i++)
		if (v[i] > 1)
			return puts("No"), 0;
	int p = 1;
	int i = 0;
	while (1) {
		for (; a[i] != -1 && i < n; i++)
			;
		for (; v[p] > 0; p++)
			;
		if (i == n)
			break;
		a[i] = p;
		v[p] = 1;
	}
	puts("Yes");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	puts("");

	return 0;
}
