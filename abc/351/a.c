#include <stdio.h>

#define MAX(a, b)	((a) > (b) ? (a) : (b))

int
main(void)
{
	int a, suma;
	int b, sumb;

	suma = 0;
	for (int i = 0; i < 9; i++)
		scanf("%d", &a), suma += a;

	sumb = 0;
	for (int i = 0; i < 9-1; i++)
		scanf("%d", &b), sumb += b;

	printf("%d\n", MAX(suma-sumb+1, 0));

	return 0;
}
