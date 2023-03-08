#include <iostream>

#include "atcoder/dsu"

int
main(void)
{
	int n, q;
	std::cin >> n >> q;

	atcoder::dsu v(n);
	for (int i = 0; i < q; i++) {
		int p, a, b;
		std::cin >> p >> a >> b;

		switch (p) {
		case 0:
			v.merge(a, b);
			break;
		case 1:
			std::cout << (v.same(a, b) ? "Yes" : "No")
				<< std::endl;
			break;
		}
	}

	return 0;
}
