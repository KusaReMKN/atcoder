#include <iostream>
#include <atcoder/all>

int
main(void)
{
	int n, q;
	std::cin >> n >> q;

	atcoder::dsu d(n);
	for (int i = 0; i < q; i++) {
		int f, u, v;
		std::cin >> f >> u >> v;
		switch (f) {
		case 1:
			d.merge(u-1, v-1);
			break;
		case 2:
			std::cout << (d.same(u-1, v-1) ? "Yes" : "No") << std::endl;
			break;
		}
	}

	return 0;
}
