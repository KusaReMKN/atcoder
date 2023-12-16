#include <stdio.h>

int
main(void)
{
	int n, m;
	char s[1001];
	int mm, t, tt;

	scanf("%d%d%s", &n, &m, s);
	mm = m;
	tt = t = 0;
	for (int i = 0; i < n; i++)
		switch (s[i]) {
		case '0':
			m = mm;
			t = tt;
			break;
		case '1':
			if (m > 0)
				m--;
			else if (t > 0)
				t--;
			else
				tt++;
			break;
		case '2':
			if (t > 0)
				t--;
			else
				tt++;
			break;
		}
	printf("%d\n", tt);

	return 0;
}
