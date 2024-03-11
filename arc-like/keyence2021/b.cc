#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <vector>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::map<int, int> m;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		m[a]++;
	}

	std::vector<int> v(k, 0);
	for (const auto &e: m)
		for (int i = 0; i < std::min(k, e.second); i++)
			if (v[i] == e.first)
				v[i]++;
	std::cout << std::reduce(v.begin(), v.end()) << std::endl;

	return 0;
}
