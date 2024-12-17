#include <stdio.h>

int
main(void)
{
	int n;
	int a[200000];
	int m[100] = { 0 };
	long cnt;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		m[a[i]%100]++;
	}

	cnt = 0;
	for (int i = 0; i < n; i++) {
		m[a[i]%100]--;
		cnt += m[(100-a[i])%100];
	}
	printf("%ld\n", cnt);

	return 0;
}
