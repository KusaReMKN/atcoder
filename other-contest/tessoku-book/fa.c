#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

int
main(void)
{
	int_least32_t d;
	scanf("%" SCNdLEAST32, &d);

	int_least64_t v[200000];
	scanf("%" SCNdLEAST64, &v[0]);
	for (int_least32_t i = 1; i < d; i++) {
		int_least16_t a;
		scanf("%" SCNdLEAST16, &a);
		v[i] = v[i-1] + a;
	}

	int_least32_t q;
	scanf("%" SCNdLEAST32, &q);
	for (int_least32_t j = 0; j < q; j++) {
		int_least32_t s, t;
		scanf("%" SCNdLEAST32 "%" SCNdLEAST32, &s, &t);
		if (v[s-1] == v[t-1])
			puts("Same");
		else
			printf("%" PRIdLEAST32 "\n", v[s-1] > v[t-1] ? s : t);
	}

	return 0;
}
