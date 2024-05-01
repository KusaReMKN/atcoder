#include <stdio.h>

int
main(void)
{
	int n;
	scanf("%d", &n);

	int perfect = 0;
	int great = 0;
	for (int i = 0; i < n; i++) {
		char s[16];
		scanf("%s", s);
		if (s[1] == 'e')
			perfect++;
		if (s[1] == 'r')
			great++;
	}
	if (n == perfect)
		return puts("All Perfect"), 0;
	if (n == perfect + great)
		return puts("Full Combo"), 0;
	puts("Failed");

	return 0;
}
