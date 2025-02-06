#include <stdio.h>

#define MIN(a, b)	((a) < (b) ? (a) : (b))

int
main(void)
{
	int n, m;
	scanf("%d%d", &n, &m);

	int s[10];
	for (int i = 0; i < n; i++) {
		char ss[11];
		scanf("%s", ss);
		s[i] = 0;
		for (int j = 0; ss[j] != '\0'; j++)
			if (ss[j] == 'o')
				s[i] |= 1 << j;
	}

	int min = 10;
	for (int i = 0; i < 1<<n; i++) {
		int cnt = 0;
		int sum = 0;
		for (int j = 0; j < n; j++)
			if (i & 1<<j) {
				sum |= s[j];
				cnt++;
			}
		if (sum == (1<<m)-1)
			min = MIN(min, cnt);
	}
	printf("%d\n", min);

	return 0;
}
