#include <stdio.h>

int
main(void)
{
	int A, B, m;
	int a[100000], b[100000];
	int x, y, c;
	int mina, minb, min;

	scanf("%d%d%d", &A, &B, &m);
	mina = 111111;
	for (int i = 0; i < A; i++) {
		scanf("%d", &a[i]);
		if (a[i] < mina)
			mina = a[i];
	}
	minb = 111111;
	for (int i = 0; i < B; i++) {
		scanf("%d", &b[i]);
		if (b[i] < minb)
			minb = b[i];
	}
	min = mina + minb;
	for (int i = 0; i < m; i++) {
		scanf("%d%d%d", &x, &y, &c);
		if (a[x-1] + b[y-1] - c < min)
			min = a[x-1] + b[y-1] - c;
	}
	printf("%d\n", min);

	return 0;
}
