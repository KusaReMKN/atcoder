#include <algorithm>
#include <iostream>
#include <vector>

static int
f(std::vector<int> &a, int k)
{
	int sum = 0;
	for (auto &e: a)
		sum += (e - k) * (e - k);
	return sum;
}

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<int> a(n);
	for (auto &e: a)
		std::cin >> e;

	auto min = *std::min_element(a.begin(), a.end());
	auto max = *std::max_element(a.begin(), a.end());
	unsigned cost = -1;
	for (int i = min; i <= max; i++) {
		auto c = f(a, i);
		if (c < cost)
			cost = c;
	}
	std::cout << cost << std::endl;

	return 0;
}
