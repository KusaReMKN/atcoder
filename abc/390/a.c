#include <stdio.h>

int
main(void)
{
	int a, w1, w2;

	w1 = w2 = -1;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a);
		if (a != i+1 && w1 < 0)
			w1 = i;
		if (a != i+1 && w1 >= 0)
			w2 = i;
	}
	puts(w1+1 == w2 ? "Yes" : "No");

	return 0;
}
