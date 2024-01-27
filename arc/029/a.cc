#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> t(n);
	for (auto &e: t)
		std::cin >> e;
	std::ranges::sort(t, std::ranges::greater());

	int a, b;
	a = b = 0;
	for (const auto &e: t) {
		if (a < b)
			a += e;
		else
			b += e;
	}
	std::cout << std::max(a, b) << std::endl;

	return 0;
}
