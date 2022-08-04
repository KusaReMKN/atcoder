#include <stdio.h>

int
main(void)
{
	int c;
	int m[3] = { 0 };
	int l, s;

	l = 0;
	while ((c = getchar()) != '\n')
		m[(c-'0') % 3]++, l++;
	s = 0;
	for (int i = 0; i < 3; i++)
		s += i * m[i];
	switch (s % 3) {
	case 0:
		return puts("0"), 0;
	case 1:
		if (m[1] >= 1 && l > 1)
			return puts("1"), 0;
		if (m[2] >= 2 && l > 2)
			return puts("2"), 0;
		return puts("-1"), 0;
	case 2:
		if (m[2] >= 1 && l > 1)
			return puts("1"), 0;
		if (m[1] >= 2 && l > 2)
			return puts("2"), 0;
		return puts("-1"), 0;
	}

	return -1;
}
