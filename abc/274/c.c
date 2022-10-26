#include <stdio.h>

int
main(void)
{
	int n, a;
	int m[400001] = { 0 };
	int cur;

	scanf("%d", &n);
	cur = 1;
	printf("0\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		m[cur+0] = m[cur+1] = m[a-1] + 1;
		printf("%d\n%d\n", m[cur+0], m[cur+1]);
		cur += 2;
	}

	return 0;
}
