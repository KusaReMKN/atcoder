#include <stdio.h>
#include <stdlib.h>

int
asc(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int
main(void)
{
	int n;
	int s[100];
	int sum;

	scanf("%d", &n);
	sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &s[i]);
		sum += s[i];
	}
	if (sum % 10 != 0)
		goto ok;
	qsort(s, n, sizeof(s[0]), asc);
	for (int i = 0; i < n; i++)
		if ((sum - s[i]) % 10 != 0) {
			sum -= s[i];
			goto ok;
		}
	sum = 0;
ok:
	printf("%d\n", sum);

	return 0;
}
