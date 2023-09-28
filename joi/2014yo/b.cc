#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	std::vector<int> p(n, 0);
	for (int i = 0; i < m; i++) {
		int b;
		std::cin >> b;
		auto ind = -1;
		for (int j = 0; j < a.size(); j++)
			if (a[j] <= b) {
				ind = j;
				break;
			}
		p[ind]++;
	}

	auto itr = std::max_element(p.begin(), p.end());
	std::cout << std::distance(p.begin(), itr) + 1 << std::endl;

	return 0;
}
