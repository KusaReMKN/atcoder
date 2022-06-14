#include <stdio.h>
#include <string.h>

char *
next(char *s)
{
	int head, tail;

	switch (s[0]) {
	case 'b':
		head = 'a', tail = 'c';
		break;
	case 'a':
		head = 'c', tail = 'a';
		break;
	case 'c':
		head = tail = 'b';
		break;
	}
	memmove(s+1, s, strlen(s)+1);
	s[0] = head;
	s[strlen(s)+1] = 0;
	s[strlen(s)] = tail;

	return s;
}

int
main(void)
{
	int i;
	char s[101], t[101] = "b";

	scanf("%*d%s", s);
	for (i = 0; strlen(s) > strlen(t); i++)
		next(t);
	if (strcmp(s, t))
		i = -1;
	printf("%d\n", i);

	return 0;
}
