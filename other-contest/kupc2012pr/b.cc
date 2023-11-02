#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::vector<std::string> a(n);
	for (auto &e: a)
		std::cin >> e;
	std::sort(a.rbegin(), a.rend());

	for (const auto &e: a)
		std::cout << e;
	std::cout << std::endl;

	return 0;
}
