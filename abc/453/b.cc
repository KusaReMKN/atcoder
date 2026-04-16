#include <cstdlib>
#include <iostream>
#include <map>

int
main(void)
{
	int t, x;
	std::cin >> t >> x;

	std::map<int, int> m;
	std::cin >> m[0];
	for (int i = 1; i <= t; i++) {
		int a;
		std::cin >> a;
		if (std::abs(m.rbegin()->second - a) >= x)
			m[i] = a;
	}

	for (const auto &e: m)
		std::cout << e.first << ' ' << e.second << std::endl;

	return 0;
}
