#include <stdio.h>

int
main(void)
{
	int n;
	scanf("%d", &n);

	int a[1000];
	int cnt[1000][4] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		while (a[i] % 2 == 0)
			a[i] /= 2, cnt[i][2]++;
		while (a[i] % 3 == 0)
			a[i] /= 3, cnt[i][3]++;
	}

	int last = a[0];
	int min2 = cnt[0][2];
	int min3 = cnt[0][3];
	for (int i = 1; i < n; i++) {
		if (last != a[i])
			return puts("-1"), 0;
		if (cnt[i][2] < min2)
			min2 = cnt[i][2];
		if (cnt[i][3] < min3)
			min3 = cnt[i][3];
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += (cnt[i][2] - min2) + (cnt[i][3] - min3);
	printf("%d\n", sum);

	return 0;
}
