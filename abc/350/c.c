#include <stdio.h>

#define MIN(a, b)	((a) < (b) ? (a) : (b))
#define MAX(a, b)	((a) > (b) ? (a) : (b))

int
main(void)
{
	long n;
	long a[200000];
	long cnt;
	long v[200000][2];

	scanf("%ld", &n);
	for (long i = 0; i < n; i++)
		scanf("%ld", &a[i]);

	cnt = 0;
	for (long i = 0; i < n; i++)
		for (; a[i] != i+1; cnt++) {
			long t;
			v[cnt][0] = a[i];
			v[cnt][1] = i+1;
			t = a[i];
			a[i] = a[t-1];
			a[t-1] = t;
		}

	printf("%ld\n", cnt);
	for (long i = 0; i < cnt; i++)
		printf("%ld %ld\n",
				MIN(v[i][0], v[i][1]), MAX(v[i][0], v[i][1]));

	return 0;
}
