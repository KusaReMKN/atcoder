#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	char n[20];
	size_t l;
	int sum;

	gets(n);
	l = strlen(n);
	for (int i = 0; i < l; i++)
		n[i] -= '0';
	for (int i = l-1; i > 0; i--) {
		while (n[i] < 0)
			n[i-1]--, n[i] += 10;
		if (n[i] != 9)
			n[i-1]--, n[i] = 9;
	}
	sum = 0;
	for (int i = 0; i < l; i++)
		sum += n[i];
	printf("%d\n", sum);

	return 0;
}
