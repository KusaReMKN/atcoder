#include <assert.h>
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
	int v[10][10];
	long sum;
};

static void
proc(int n, int r, int *a, long p, void *e)
{
	struct env *env = e;
	int ok;

	ok = 1;
	for (int i = 1; i < r; i++)
		if (env->v[a[i-1]][a[i]] == 0) {
			ok = 0;
			break;
		}
	env->sum += ok;
}

int
main(void)
{
	int n, m, a, b;
	struct env env = { 0 };
	int t[10] = { 1 };
	long p = { 0 };

	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d%d", &a, &b);
		env.v[a][b] = env.v[b][a] = 1;
	}
	permut(n, n, t, &p, proc, &env);
	printf("%ld\n", env.sum);

	return 0;
}
