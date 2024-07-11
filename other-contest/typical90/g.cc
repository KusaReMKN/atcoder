#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;
	std::sort(a.begin(), a.end());

	int q;
	std::cin >> q;
	for (int i = 0; i < q; i++) {
		int b;
		std::cin >> b;

		auto leq = std::lower_bound(a.begin(), a.end(), b);
		auto geq = leq == a.begin() ? leq : std::prev(leq);
		auto r = std::abs(*leq - b);
		auto l = std::abs(*geq - b);
		std::cout << std::min(r, l) << std::endl;
	}

	return 0;
}
