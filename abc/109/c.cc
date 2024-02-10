#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <numeric>
#include <vector>

int
main(void)
{
	int n, x;
	std::cin >> n >> x;

	std::vector<int> xx(n);
	for (auto &e: xx) {
		std::cin >> e;
		e -= x;
	}

	auto d = std::reduce(xx.begin(), xx.end(), 0, [](auto a, auto b) {
			return std::gcd(a, b);
		});
	std::cout << std::abs(d) << std::endl;

	return 0;
}
