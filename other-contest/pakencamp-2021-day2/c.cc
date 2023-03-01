#include <iostream>
#include <set>

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

	for (auto const &e: a)
		b.erase(e);

	std::cout << b.size() << std::endl;
	for (auto const &e: b)
		std::cout << e << std::endl;

	return 0;
}
