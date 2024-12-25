#include <algorithm>
#include <iostream>
#include <iterator>
#include <map>
#include <set>

int
main(void)
{
	int n;
	std::cin >> n;

	std::map<int, std::set<int>> m;
	for (int i = 0; i < n; i++) {
		int h;
		std::cin >> h;
		m[h].insert(i);
	}

	int max = 0;
	for (const auto &e: m) {
		const auto &k = e.second;
		for (auto itr = k.begin(); itr != k.end(); itr++) {
			int cnt = 1;
			for (auto jtr = std::next(itr); jtr != k.end(); jtr++) {
				int last = *jtr;
				int d = *jtr - *itr;
				cnt = 2;
				while (k.count(last + d) > 0) {
					last += d;
					cnt++;
				}
				max = std::max(cnt, max);
			}
			max = std::max(cnt, max);
		}
	}
	std::cout << max << std::endl;

	return 0;
}
