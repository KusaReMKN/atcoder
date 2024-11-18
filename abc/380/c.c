#include <stdio.h>
#include <string.h>

int
main(void)
{
	size_t i, j, n, k;
	char *p, *q, s[500001], t[500001], *v, *w;

	scanf("%zu%zu%s", &n, &k, s);
	strcpy(t, s);

	p = strtok_r(s, "1", &v);	/* 0 */
	q = strtok_r(t, "0", &w);	/* 1 */
	if (s[0] == '0') {
		printf("%s", p);
		p = strtok_r(NULL, "1", &v);
	}
	for (i = 1; i < k-1; i++) {
		printf("%s%s", q, p);
		q = strtok_r(NULL, "0", &w);
		p = strtok_r(NULL, "1", &v);
	}
	printf("%s", q);
	q = strtok_r(NULL, "0", &w);
	printf("%s%s", q, p);
	while (1) {
		if ((p = strtok_r(NULL, "1", &v)) == NULL)
			break;
		printf("%s", p);
		if ((q = strtok_r(NULL, "0", &w)) == NULL)
			break;
		printf("%s", q);
	}

	return 0;
}
