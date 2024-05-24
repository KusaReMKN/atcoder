#include <cstdlib>
#include <iostream>
#include <numeric>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	auto ave = std::reduce(a.begin(), a.end()) / n;
	for (const auto &e: a)
		std::cout << std::abs(e - ave) << std::endl;

	return 0;
}
