#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b)	((a) > (b) ? (a) : (b))
#define MIN(a, b)	((a) < (b) ? (a) : (b))

static int
ans1(int a, int b)
{
	return a - b;
}

static int
ans2(int c, int d)
{
	return c + d;
}

static int
ans3(int e, int f)
{
	return MAX(f+1 - e, 0);
}

static int
ans4(int g, int h, int i)
{
	int x;

	for (x = 0; 3*x <= g+h+i; x++);

	return x;
}

static char *
ans5(int j)
{
	char *tab[] = {
		"",
		"a",
		"aa",
		"aaa",
		"aaai",
		"aaaji",
		"aabaji",
		"agabaji",
		"dagabaji",
	};
	return tab[j];
}

static int
ans6(int k, int l, int m)
{
	int c;

	for (c = 0; c < 59*61; c++)
		if (c % 59 == k && c % 61 == l)
			break;

	return c + 59*61 * (m-1);
}

static int
ans7(int a6, int n)
{
	int tab[] = { 6, 28, 496, 8128 };

	for (int i = 0; i < 4; i++)
		if (abs(a6-tab[i]) >= n)
			return tab[i];

	return 33550336;
}

static int
ans8(int o, int p, int q, int r, int s, int t,
		int u, int v, int w, int x, int y, int z)
{
	long opq = o + p + q;
	long rst = r + s + t;
	long uvw = u + v + w;
	long xyz = x + y + z;

	return (((opq * rst) % 9973) * ((uvw * xyz) % 9973)) % 9973;
}

int
main(void)
{
	int a, b;
	int c, d;
	int e, f;
	int g, h, i;
	int j;
	int k, l, m;
	int n;
	int o, p, q, r, s, t, u, v, w, x, y, z;
	int fav1, fav2;

	scanf("%d%d", &a, &b);
	printf("%d\n", ans1(a, b));
	scanf("%d%d", &c, &d);
	printf("%d\n", ans2(c, d));
	scanf("%d%d", &e, &f);
	printf("%d\n", ans3(e, f));
	scanf("%d%d%d", &g, &h, &i);
	printf("%d\n", ans4(g, h, i));
	scanf("%d", &j);
	printf("%s\n", ans5(j));
	scanf("%d%d%d", &k, &l, &m);
	fav1 = ans6(k, l, m);
	scanf("%d", &n);
	fav2 = ans7(fav1, n);
	printf("%d\n%d\n", MIN(fav1, fav2), MAX(fav1, fav2));
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d",
			&o, &p, &q, &r, &s, &t, &u, &v, &w, &x, &y, &z);
	printf("%d\n", ans8(o, p, q, r, s, t, u, v, w, x, y, z));

	return 0;
}
