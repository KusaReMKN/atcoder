#include <cstdlib>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	long sum = 0;
	for (auto &e: a) {
		std::cin >> e;
		sum += e;
	}

	long min = 9090909090L;
	long part = 0;
	for (auto &e: a) {
		part += e;
		if (std::abs(sum - 2 * part) < min)
			min = std::abs(sum - 2 * part);
	}
	std::cout << min << std::endl;

	return 0;
}
