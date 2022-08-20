#include <stdio.h>
#include <string.h>

int
main(void)
{
	int n;
	char w[101], *p;
	int res;

	scanf("%d", &n);
	res = 0;
	for (int i = 0; i < n; i++) {
		scanf("%s", w);
		if ((p = strchr(w, '.')) != NULL)
			*p = '\0';
		if (strcmp(w, "TAKAHASHIKUN") == 0
				|| strcmp(w, "Takahashikun") == 0
				|| strcmp(w, "takahashikun") == 0)
			res++;
	}
	printf("%d\n", res);

	return 0;
}
