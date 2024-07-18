#include <iostream>
#include "atcoder/all"

int
main(void)
{
	int n, q;
	std::cin >> n >> q;

	atcoder::dsu g(n);
	for (int i = 0; i < q; i++) {
		int t, u, v;
		std::cin >> t >> u >> v;
		switch (t) {
		case 0:
			g.merge(u, v);
			break;
		case 1:
			std::cout << (int)g.same(u, v) << std::endl;
			break;
		}
	}

	return 0;
}
