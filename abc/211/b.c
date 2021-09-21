#include <stdio.h>
#include <string.h>

int main(void)
{
	int h = 0, bb = 0, bbb = 0, hr = 0;
int i;

	for (i = 0; i < 4; i++) {
		char _[4];

		scanf ("%s", _);
		if (!strcmp(_, "H"))
			h++;
		if (!strcmp(_, "2B"))
			bb++;
		if (!strcmp(_, "3B"))
			bbb++;
		if (!strcmp(_, "HR"))
			hr++;
	}

	if (!h || !bb || !bbb || !hr)
		puts("No");
	else
		puts("Yes");

	return 0;
}
