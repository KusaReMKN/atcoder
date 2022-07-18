#include <stdio.h>
#include <stdlib.h>

struct student {
	int n, a, b;
	int ok;
};

int
ascn(const void *a, const void *b)
{
	const struct student *p = a, *q = b;
	return p->n - q->n;
}

int
desca(const void *a, const void *b)
{
	const struct student *p = a, *q = b;
	return q->a - p->a;
}

int
descb(const void *a, const void *b)
{
	const struct student *p = a, *q = b;
	return q->b - p->b;
}

int
descab(const void *a, const void *b)
{
	const struct student *p = a, *q = b;
	return (q->a + q->b) - (p->a + p->b);
}

int
main(void)
{
	int n, x, y, z;
	struct student s[1000];

	scanf("%d%d%d%d", &n, &x, &y, &z);
	for (int i = 0; i < n; i++)
		scanf("%d", &s[i].a), s[i].n = i+1, s[i].ok = 0;
	for (int i = 0; i < n; i++)
		scanf("%d", &s[i].b);
	qsort(s, n, sizeof(s[0]), desca);
	for (int i = 0, j = 0; i < n && j < x; i++, j++)
		s[i].ok = 1;
	qsort(s, n, sizeof(s[0]), ascn);
	qsort(s, n, sizeof(s[0]), descb);
	for (int i = 0, j = 0; i < n && j < y; i++, j++)
		if (s[i].ok)
			j--;
		else
			s[i].ok = 1;
	qsort(s, n, sizeof(s[0]), ascn);
	qsort(s, n, sizeof(s[0]), descab);
	for (int i = 0, j = 0; i < n && j < z; i++, j++)
		if (s[i].ok)
			j--;
		else
			s[i].ok = 1;
	qsort(s, n, sizeof(s[0]), ascn);
	for (int i = 0; i < n; i++)
		if (s[i].ok)
			printf("%d\n", s[i].n);

	return 0;
}
