#include <stdio.h>

int
main(void)
{
	int h1, m1, s1, h2, m2, s2;

	for (int i = 0; i < 3; i++) {
		scanf("%d%d%d%d%d%d", &h1, &m1, &s1, &h2, &m2, &s2);
		h2 -= h1;
		m2 -= m1;
		s2 -= s1;
		if (s2 < 0) {
			s2 += 60;
			m2--;
		}
		if (m2 < 0) {
			m2 += 60;
			h2--;
		}
		printf("%d %d %d\n", h2, m2, s2);
	}

	return 0;
}
