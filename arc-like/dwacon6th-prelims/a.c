#include <stdio.h>

int
main(void)
{
	int f, n, t[50];
	char s[50][101], x[101];
	long sum;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%s%d", s[i], &t[i]);
	scanf("%s", x);
	f = sum = 0;
	for (int i = 0; i < n; i++) {
		if (f)
			sum += t[i];
		if (strcmp(x, s[i]) == 0)
			f = 1;
	} 
	printf("%ld\n", sum);

	return 0;
}
