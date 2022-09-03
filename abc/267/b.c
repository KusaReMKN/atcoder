#include <stdio.h>
#include <stdlib.h>

#define PIN(n) (1 << (10 - (n)))

int
main(void)
{
	char ss[11];
	int s;
	int rawtab[] = {
		PIN(7),
		PIN(4),
		PIN(8) | PIN(2),
		PIN(5) | PIN(1),
		PIN(9) | PIN(3),
		PIN(6),
		PIN(10),
	};

	gets(ss);
	s = strtol(ss, NULL, 2);
	if (s & PIN(1))
		return puts("No"), 0;
	for (int i = 0; i < 7; i++)
		for (int j = i+1; j < 7; j++)
			if (s & rawtab[i] && s & rawtab[j])
				for (int k = i+1; k < j; k++)
					if (!(s & rawtab[k]))
						return puts("Yes"), 0;
	puts("No");

	return 0;
}
