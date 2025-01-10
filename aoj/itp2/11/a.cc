#include <iostream>
#include <set>

int
main(void)
{
	int n;
	std::cin >> n;

	for (int i = 0; i < 1<<n; i++) {
		auto a = i;
		std::set<int> s;
		for (int j = 0; a > 0; j++) {
			if (a & 1)
				s.insert(j);
			a >>= 1;
		}
		std::cout << i << ':';
		for (const auto &e: s)
			std::cout << ' ' << e;
		std::cout << std::endl;
	}

	return 0;
}
