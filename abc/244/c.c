#include <stdio.h>

main()
{
	int i, n, max;
	int buf[2002] = { 0 };

	setbuf(stdout, NULL);
	scanf("%d", &n);
	max = 2 * n + 1;
	i = 1;
	while (i < max && n != 0) {
		for (; buf[i] != 0; i++);
		printf("%i\n", i);
		buf[i] = 1;
		scanf("%d", &n);
		buf[n] = 1;
	}
}
