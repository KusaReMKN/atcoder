#include <stdio.h>

int
main(void)
{
	int n, k;
	int h0, h;
	int cnt, max;

	scanf("%d%d", &n, &k);
	scanf("%d", &h0);
	max = cnt = 1;
	for (int i = 1; i < n; i++) {
		scanf("%d", &h);
		if (h0 == h)
			cnt++;
		else
			cnt = 1;
		if (max < cnt)
			max = cnt;
		h0 = h;
	}
	puts(max >= k ? "Yes" : "No");

	return 0;
}
