#include <stdio.h>

int
contains(const int a[], int an, const int b[], int bn)
{
	int p = 0;

	for (int i = 0; i < bn && p < an; i++)
		while (a[p] != b[i])
			p++;

	return p < an;
}

void
swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int
main(void)
{
	int h1, w1, h2, w2;
	int a[10][10], b[10][10];
	int x[10][10], y[10][10];
	int pp;

	scanf("%d%d", &h1, &w1);
	for (int i = 0; i < h1; i++)
		for (int j = 0; j < w1; j++)
			scanf("%d", &a[i][j]);
	scanf("%d%d", &h2, &w2);
	for (int i = 0; i < h2; i++)
		for (int j = 0; j < w2; j++)
			scanf("%d", &b[i][j]);

	pp = 0;
	for (int i = 0; i < h2 && pp < h1; i++)
		while (!contains(a[pp], w1, b[i], w2))
			pp++;
	if (pp >= h1)
		return puts("No"), 0;

	for (int i = 0; i < h1; i++)
		for (int j = 0; j < w1; j++)
			x[j][i] = a[i][j];
	for (int i = 0; i < h2; i++)
		for (int j = 0; j < w2; j++)
			y[j][i] = b[i][j];

	pp = 0;
	for (int i = 0; i < w2 && pp < w1; i++)
		while (!contains(x[pp], h1, y[i], h2))
			pp++;
	if (pp >= w1)
		return puts("No"), 0;

	puts("Yes");

	return 0;
}
