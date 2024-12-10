#include <stdio.h>

int
main(void)
{
	int n, k, o;
	char s[300001];

	scanf("%d%d%s", &n, &k, s);
	o = 0;
	for (int i = 0; i < n; i++)
		if (s[i] == '1')
			o++;
	puts(o % 2 == k % 2 ? "Yes" : "No");

	return 0;
}
