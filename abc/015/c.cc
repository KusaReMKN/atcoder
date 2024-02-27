#include <iostream>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::vector t(n, std::vector<int>(k));
	for (auto &r: t)
		for (auto &e: r)
			std::cin >> e;

	auto m = 1;
	for (auto i = 0; i < n; i++)
		m *= k;

	for (auto i = 0; i < m; i++) {
		std::vector<int> d(n);
		for (auto j = 0, q = i; j < n; j++, q /= k)
			d[j] = q % k;

		auto x = 0;
		for (auto i = 0; i < n; i++)
			x ^= t[i][d[i]];
		if (x == 0) {
			std::cout << "Found" << std::endl;
			std::clog << i << std::endl;
			return 0;
		}
	}
	std::cout << "Nothing" << std::endl;

	return 0;
}
