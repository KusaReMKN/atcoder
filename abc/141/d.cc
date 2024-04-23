#include <algorithm>
#include <iostream>
#include <map>

int
main(void)
{
	long n, m;
	std::cin >> n >> m;

	std::map<long, long> v;
	for (int i = 0; i < n; i++) {
		long a;
		std::cin >> a;
		v[a]++;
	}

	while (m > 0) {
		auto max = *v.rbegin();
		v[max.first / 2] += std::min(max.second, m);
		v[max.first] -= std::min(max.second, m);
		m -= std::min(max.second, m);
		if (v[max.first] == 0)
			v.erase(max.first);
	}

	long sum = 0;
	for (const auto &e: v)
		sum += e.first * e.second;
	std::cout << sum << std::endl;

	return 0;
}
