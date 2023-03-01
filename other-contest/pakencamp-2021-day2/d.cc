#include <algorithm>
#include <iostream>
#include <map>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::map<int, int> v;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		v[a]++;
	}

	int max = 0;
	int min = n;
	for (auto const &e: v) {
		max = std::max(max, e.second);
		min = std::min(min, e.second);
	}
	if (v.size() < m)
		min = 0;
	std::cout << min << " " << max << std::endl;

	return 0;
}
