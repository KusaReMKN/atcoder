#include <stdio.h>
#include <string.h>

int
main(void)
{
	int n;
	char s[] = "sweet";
	int wasSweet, retire;

	scanf("%d", &n);
	scanf("%s", s);
	if (strcmp(s, "sweet") == 0)
		wasSweet = 1;
	else
		wasSweet = 0;
	retire = 1;
	for (int i = 1; i < n; i++) {
		scanf("%s", s);
		retire = i+1;
		if (strcmp(s, "sweet") == 0) {
			if (wasSweet)
				break;
			wasSweet = 1;
		} else {
			wasSweet = 0;
		}
	}
	puts(retire == n ? "Yes" : "No");

	return 0;
}
