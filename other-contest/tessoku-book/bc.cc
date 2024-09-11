#include <iostream>
#include <set>

int
main(void)
{
	int q;
	std::cin >> q;

	std::set<int> s;
	for (int i = 0; i < q; i++) {
		int f, x;
		std::cin >> f >> x;
		switch (f) {
		case 1:
			s.insert(x);
			break;
		case 2:
			s.erase(x);
			break;
		case 3:
			auto itr = s.lower_bound(x);
			if (itr == s.end())
				std::cout << -1 << std::endl;
			else
				std::cout << *itr << std::endl;
			break;
		}
	}

	return 0;
}
