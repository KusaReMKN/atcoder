#include <stdio.h>

int
main(void)
{
	int n, a, b;
	char s[100001];
	int ab, abb;

	scanf("%d%d%d%s", &n, &a, &b, s);
	ab = abb = 0;
	for (int i = 0; i < n; i++)
		switch (s[i]) {
		case 'a':
			if (ab < a+b)
				puts("Yes"), ab++;
			else
				puts("No");
			break;
		case 'b':
			if (ab < a+b && abb < b)
				puts("Yes"), ab++, abb++;
			else
				puts("No");
			break;
		case 'c':
			puts("No");
		}

	return 0;
}
