#include <stdio.h>
#include <string.h>

int
main(void)
{
	size_t p;
	char s[200001], v[200001];

	scanf("%*d%s", s);
	p = 0;
	for (size_t i = 0; s[i] != '\0'; i++) {
		v[p++] = s[i];
		if (memcmp(&v[p-3], "fox", 3) == 0)
			p -= 3;
	}
	printf("%zu\n", p);

	return 0;
}
