#include <stdio.h>

main()
{
	int n, a;
	int i, v[100000] = { 0 };

	scanf("%d", &n);
	while (scanf("%d", &a) != EOF)
		v[a - 1]++;
	for (i = 0; i < n; i++)
		if (v[i] != 4)
			break;
	printf("%d\n", i + 1);
}
