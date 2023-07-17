#include <iostream>
#include <set>
#include <utility>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<std::pair<int, std::set<int>>> pf(n);
	for (int i = 0; i < n; i++) {
		int c;
		std::cin >> pf[i].first >> c;
		for (int j = 0; j < c; j++) {
			int t;
			std::cin >> t;
			pf[i].second.insert(t);
		}
	}
	std::sort(pf.rbegin(), pf.rend());

	auto res = false;
	for (int i = 0; i < n; i++)
		for (int j = i+1; j < n; j++) {
			auto has = true;
			for (const auto f: pf[i].second)
				if (pf[j].second.count(f) == 0) {
					has = false;
					goto next;
				}
			if (pf[i].first > pf[j].first
					|| pf[i].second.size()
						< pf[j].second.size()) {
				res = true;
				goto result;
			}
next:		(void)0;
		}
result:
	std::cout << (res ? "Yes" : "No") << std::endl;

	return 0;
}
