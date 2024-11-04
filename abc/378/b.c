#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int
main(void)
{
	int_fast32_t d, q[100], r[100];
	int_fast8_t n, que, t;

	scanf("%" SCNdFAST8, &n);
	for (int_fast8_t i = 0; i < n; i++)
		scanf("%" SCNdFAST32 "%" SCNdFAST32, &q[i], &r[i]);
	scanf("%" SCNdFAST8, &que);
	for (int_fast8_t j = 0; j < que; j++) {
		scanf("%" SCNdFAST8 "%" SCNdFAST32, &t, &d);
		d += (r[t-1] + q[t-1] - d % q[t-1]) % q[t-1];
		printf("%" PRIdFAST32 "\n", d);
	}

	return 0;
}
