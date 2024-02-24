#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<long> v(n+1);
	v[0] = 0;
	for (auto i = 1; i <= n; i++)
		std::cin >> v[i], v[i] += v[i-1];

	unsigned long min = -1;
	for (auto i = 1; i < n; i++) {
		auto x = v[i];
		auto y = v.back() - x;
		min = std::min(min, (unsigned long)std::abs(x-y));
	}
	std::cout << min << std::endl;

	return 0;
}
