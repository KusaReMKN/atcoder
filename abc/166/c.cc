#include <iostream>
#include <map>
#include <set>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<int> h(n);
	for (auto &e: h)
		std::cin >> e;

	std::map<int, std::set<int>> g;
	for (int i = 0; i < m; i++) {
		int a, b;
		std::cin >> a >> b;
		g[a-1].insert(b-1);
		g[b-1].insert(a-1);
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		bool good = true;
		for (const auto &e: g[i])
			if (h[i] <= h[e]) {
				good = false;
				break;
			}
		if (good)
			cnt++;
	}
	std::cout << cnt << std::endl;

	return 0;
}
