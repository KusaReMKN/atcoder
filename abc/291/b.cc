#include <algorithm>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> x(5*n);
	for (auto &e: x)
		std::cin >> e;
	std::sort(x.begin(), x.end());

	auto sum = std::accumulate(x.begin() + n, x.end() - n, 0L);
	std::clog << sum << std::endl;
	std::cout << std::fixed << std::setprecision(9);
	std::cout << ((long double)sum / (3 * n)) << std::endl;

	return 0;
}
