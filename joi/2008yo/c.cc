#include <algorithm>
#include <iostream>
#include <iterator>
#include <set>

int
main(void)
{
	int n;
	std::cin >> n;

	std::set<int> a;
	for (int i = 0; i < n; i++) {
		int t;
		std::cin >> t;
		a.insert(t);
	}

	std::set<int> u;
	for (int i = 1; i <= 2*n; i++)
		u.insert(i);

	std::set<int> b;
	std::set_difference(u.begin(), u.end(), a.begin(), a.end(),
			std::inserter(b, b.end()));

	int c = -1;
	while (1) {
		auto aitr = a.upper_bound(c);
		if (aitr == a.end()) {
			std::clog << "A: pass" << std::endl;
			c = -1;
		} else {
			std::clog << "A: " << *aitr << std::endl;
			c = *aitr;
			a.erase(*aitr);
		}
		if (a.size() == 0)
			break;

		auto bitr = b.upper_bound(c);
		if (bitr == b.end()) {
			std::clog << "B: pass" << std::endl;
			c = -1;
		} else {
			std::clog << "B: " << *bitr << std::endl;
			c = *bitr;
			b.erase(*bitr);
		}
		if (b.size() == 0)
			break;
	}
	std::cout << b.size() << std::endl << a.size() << std::endl;

	return 0;
}
