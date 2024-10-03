#include <iostream>
#include <iterator>
#include <set>

int
main(void)
{
	int q;
	std::cin >> q;

	std::multiset<int> s;
	for (int i = 0; i < q; i++) {
		int f, x;
		std::cin >> f;
		switch (f) {
		case 1:
			std::cin >> x;
			s.insert(x);
			break;
		case 2:
			std::cout << *s.begin() << std::endl;
			break;
		case 3:
			s.erase(s.begin(), std::next(s.begin()));
			break;
		}
	}

	return 0;
}
