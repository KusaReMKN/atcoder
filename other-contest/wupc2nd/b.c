#include <stdio.h>

#define MIN(a, b)	((a) < (b) ? (a) : (b))

int
main(void)
{
	int n;
	int dp[100];
	char s[101];

	scanf("%d%s", &n, s);
	dp[0] = 0;
	for (int i = 1; s[i] != '\0'; i++) {
		dp[i] = dp[i-1] + (s[i] == 'X');
		if (i-2 >= 0)
			dp[i] = MIN(dp[i], dp[i-2] + (s[i] == 'X'));
		if (i-3 >= 0)
			dp[i] = MIN(dp[i], dp[i-3] + (s[i] == 'X'));
	}
	printf("%d\n", dp[n-1]);

	return 0;
}
