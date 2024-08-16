#include <stdio.h>
#include <string.h>

int
main(void)
{
	int n, m, k;
	int v[200], u[200];
	int head;

	scanf("%d%d", &n, &m);
	head = 0;
	for (int i = 0; i < 2*n; i++)
		v[i] = i+1;
	for (int i = 0; i < m; i++) {
		scanf("%d", &k);
		if (k > 0) {
			head = (head + k) % (2*n);
		} else {
			for (int i = 0; i < n; i++) {
				u[2*i+0] = v[(head+i)%(2*n)];
				u[2*i+1] = v[(head+i+n)%(2*n)];
			}
			memcpy(v, u, sizeof(v));
			head = 0;
		}
	}
	for (int i = 0; i < 2*n; i++)
		printf("%d\n", v[i]);

	return 0;
}
