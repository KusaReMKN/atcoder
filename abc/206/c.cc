#include <iostream>
#include <map>

int
main(void)
{
	int n;
	std::cin >> n;

	auto nC2 = (long)n * (n-1) / 2;
	std::map<int, int> m;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		m[a]++;
	}
	for (const auto &e: m) {
		auto k = e.second;
		nC2 -= (long)k * (k-1) / 2;
	}
	std::cout << nC2 << std::endl;

	return 0;
}
