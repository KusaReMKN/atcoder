#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::set<int> a;
	for (int i = 0; i < n; i++) {
		int t;
		std::cin >> t;
		a.insert(t);
	}

	std::set<int> b;
	for (int i = 0; i < m; i++) {
		int t;
		std::cin >> t;
		b.insert(t);
	}

	std::vector<int> c;
	std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::back_inserter(c));

	for (const auto &e: c)
		std::cout << e << std::endl;

	return 0;
}
