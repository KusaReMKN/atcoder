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

	auto sum = std::reduce(a.begin(), a.end(), 0, std::bit_xor<>());
	for (const auto &e: a)
		std::cout << (sum ^ e) << " ";
	std::cout << std::endl;

	return 0;
}
