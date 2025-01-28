#include <stdio.h>
#include <string.h>

#define MAX(a, b)	((a) > (b) ? (a) : (b))
#define MIN(a, b)	((a) < (b) ? (a) : (b))

int
main(void)
{
	int h, w;
	scanf("%d%d", &h, &w);

	char s[1001][1001];
	int left, right, top, bottom;
	left = w;
	right = 0;
	top = h;
	bottom = 0;
	for (int i = 0; i < h; i++) {
		scanf("%s", s[i]);
		if (strchr(s[i], '#') != NULL) {
			left = MIN(left, strchr(s[i], '#') - s[i]);
			right = MAX(right, strrchr(s[i], '#') - s[i]);
			top = MIN(top, i);
			bottom = MAX(bottom, i);
		}
	}

	for (int i = top; i <= bottom; i++) {
		s[i][right+1] = '\0';
		if (strchr(s[i]+left, '.') != NULL)
			return puts("No"), 0;
	}
	puts("Yes");

	return 0;
}
