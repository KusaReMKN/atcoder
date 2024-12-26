#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::map<int, int> g;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		g[a]++;
	}

	std::vector<int> b(m);
	for (auto &e: b)
		std::cin >> e;
	std::sort(b.begin(), b.end());

	long sum = 0;
	while (b.size() > 0) {
		auto itr = g.lower_bound(b.back());
		if (itr == g.end()) {
			sum = -1;
			break;
		}
		sum += itr->first;
		itr->second--;
		if (itr->second == 0)
			g.erase(itr);
		b.pop_back();
	}
	std::cout << sum << std::endl;

	return 0;
}
