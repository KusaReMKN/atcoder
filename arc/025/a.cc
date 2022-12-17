#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	std::vector<int> d(7), j(7);
	int sum;

	for (auto &e: d)
		std::cin >> e;
	for (auto &e: j)
		std::cin >> e;
	sum = 0;
	for (int i = 0; i < 7; i++)
		sum += std::max(d[i], j[i]);
	std::cout << sum << std::endl;

	return 0;
}
