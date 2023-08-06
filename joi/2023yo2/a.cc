#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	auto max = *std::max_element(a.begin(), a.end());
	auto min = *std::min_element(a.begin(), a.end());
	for (const auto &e: a)
		std::cout << std::max(std::abs(max-e), std::abs(min-e))
			<< std::endl;

	return 0;
}
