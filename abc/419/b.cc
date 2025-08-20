#include <iostream>
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
			s.erase(s.begin());
		}
	}

	return 0;
}
