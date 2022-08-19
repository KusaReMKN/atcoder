#include <stdio.h>

int
main(void)
{
	int n, c;
	double ave;

	scanf("%d", &n);
	ave = 0.0;
	for (int i = 0; i < n; i++) {
		scanf("%1X", &c);
		if (c == 0x0F)
			continue;
		ave += 0x0E - c;
	}
	printf("%.9f\n", ave / n);

	return 0;
}
