#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::vector<std::string> s(k);
	for (auto &e: s)
		std::cin >> e;

	std::sort(s.begin(), s.end());
	for (const auto &e: s)
		std::cout << e << std::endl;

	return 0;
}
