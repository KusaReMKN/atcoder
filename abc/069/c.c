#include <stdio.h>

int
main(void)
{
	int n, a;
	int cnt4, cnt2;

	scanf("%d", &n);
	cnt4 = cnt2 = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if ((a & 3) == 0)
			cnt4++;
		if ((a & 1) == 0)
			cnt2++;
	}
	fprintf(stderr, "%d %d\n", cnt4, cnt2);
	cnt2 -= cnt4;
	cnt2 >>= 1;
	puts(cnt4 + cnt2 >= n/2 ? "Yes" : "No");

	return 0;
}
