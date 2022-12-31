#include <algorithm>
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
	std::sort(a.rbegin(), a.rend());

	long sum = 0;
	bool first = true;
	for (auto &e: a) {
		if (first)
			sum += e;
		first = !first;
	}
	std::cout << sum << std::endl;

	return 0;
}
