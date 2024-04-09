#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

int
main(void)
{
	long n;
	std::cin >> n;

	std::vector<long> x(n), y(n);
	for (long i = 0; i < n; i++)
		std::cin >> x[i] >> y[i];

	std::string s;
	std::cin >> s;

	std::map<long, std::vector<std::pair<long, char>>> m;
	for (long i = 0; i < n; i++)
		m[y[i]].push_back({ x[i], s[i] });

	for (const auto &e: m) {
		long rmin = 1000000001L, lmax = -1;
		for (long i = 0; i < e.second.size(); i++)
			switch (e.second[i].second) {
			case 'L':
				lmax = std::max(lmax, e.second[i].first);
				break;
			case 'R':
				rmin = std::min(rmin, e.second[i].first);
				break;
			}
		if (rmin < lmax) {
			std::cout << "Yes" << std::endl;
			return 0;
		}
	}
	std::cout << "No" << std::endl;

	return 0;
}
