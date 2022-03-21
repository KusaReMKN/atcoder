#include <stdio.h>
#include <stdlib.h>

int comper(void *a, void *b)
{
	return (*(int *)a - *(int * )b);
}

int main(void)
{
	int n;
	scanf("%d", &n);

	int *a = malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%d", a+i);
	}

	qsort(a, n, sizeof(int), comper);

	int i;

	for (i = 0; i < n - 1; i++) {
      if (bsearch(a+i, a+i+1, n-i-1, sizeof(int), comper)) {
        printf("NO\n");
        return 0;
      }
    }

  printf("YES\n");
	return 0;
}
