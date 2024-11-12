#include <stdio.h>

#define MAX(a, b)	((a) > (b) ? (a) : (b))
#define MIN(a, b)	((a) < (b) ? (a) : (b))

int
main(void)
{
	int i, jlen, olen, ilen, joimax;
	char s[1000001];

	scanf("%s", s);
	joimax = 0;
	for (i = 0; s[i] != '\0'; ) {
		for (jlen = 0; s[i] == 'J'; jlen++)
			i++;
		for (olen = 0; s[i] == 'O'; olen++)
			i++;
		for (ilen = 0; s[i] == 'I'; ilen++)
			i++;
		if (MIN(jlen, ilen) < olen)
			continue;
		joimax = MAX(joimax, MIN(MIN(jlen, olen), ilen));
	}
	printf("%d\n", joimax);

	return 0;
}
