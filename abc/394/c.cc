#include <iostream>
#include <map>
#include <set>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	int cnt = 0;
	std::map<int, std::set<int>> g;
	for (int i = 0; i < m; i++) {
		int u, v;
		std::cin >> u >> v;

		if (u == v) {
			cnt++;
			continue;
		}
		if (g[u].count(v) > 0) {
			cnt++;
			continue;
		}
		g[u].insert(v);
		g[v].insert(u);
	}
	std::cout << cnt << std::endl;

	return 0;
}
