#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void
permut(int n, int r, int *a, long *p,
		void (*proc)(int, int, int *, long, void *), void *e)
{
	int l, *u;

	assert(u = alloca(sizeof(*u) * (n+1)));
	memset(u, 0, sizeof(*u) * (n+1));
	for (l = 0; a[l] != 0; l++)
		u[a[l]] = 1;
	if (l == r && proc != NULL)
		return proc(n, r, a, ++*p, e);
	for (int i = 1; i <= n; i++)
		if (u[i] == 0) {
			a[l] = i, a[l+1] = 0;
			permut(n, r, a, p, proc, e);
		}
}

struct env {
	int n;
	int p[8][2];
	double s;
};

static void
proc(int n, int r, int *a, long p, void *e)
{
	struct env *env = e;
	double sum;

	sum = 0;
	for (int i = 1; i < r; i++)
		sum += hypot(env->p[a[i]-1][0] - env->p[a[i-1]-1][0],
				env->p[a[i]-1][1] - env->p[a[i-1]-1][1]);
	env->s += sum;
}

int
main(void)
{
	struct env e = { 0 };
	int a[10] = { 0 };
	long p;

	scanf("%d", &e.n);
	for (int i = 0; i < e.n; i++)
		scanf("%d%d", &e.p[i][0], &e.p[i][1]);
	permut(e.n, e.n, a, &p, proc, &e);
	printf("%.9f\n", e.s / p);

	return 0;
}
