#include <stdio.h>
#include <string.h>

int
main(void)
{
	char s[1000001], *p, *q;
	int len, head, tail;

	gets(s);
	len = strlen(s);
	for (head = 0; head < len && s[head] == 'a'; head++)
		;
	for (tail = 0; tail < len && s[len-tail-1] == 'a'; tail++)
		;
	if (head <= tail) {
		p = &s[len-tail-1];
		q = &s[head];
		for (p; q < p; q++, p--)
			if (*p != *q)
				goto no;
		puts("Yes");
	} else {
no:
		puts("No");
	}

	return 0;
}
