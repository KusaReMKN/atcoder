#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

static bool
next(std::vector<int> &a, const std::vector<int> &r)
{
	a.back()++;

	for (auto i = a.size(); --i > 0; )
		if (a[i] > r[i]) {
			a[i] = 1;
			if (i > 0)
				a[i-1]++;
		}

	return a[0] <= r[0];
}

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::vector<int> r(n);
	for (auto &e: r)
		std::cin >> e;

	std::vector<int> a(n, 1);
	do {
		auto sum = std::reduce(a.begin(), a.end());
		if (sum % k == 0) {
			for (const auto &e: a)
				std::cout << e << ' ';
			std::cout << std::endl;
		}
	} while (next(a, r));

	return 0;
}
