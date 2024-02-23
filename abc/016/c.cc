#include <iostream>
#include <map>
#include <set>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::map<int, std::set<int>> g;
	for (auto i = 0; i < m; i++) {
		int a, b;
		std::cin >> a >> b;
		g[a].insert(b);
		g[b].insert(a);
	}

	for (auto i = 1; i <= n; i++) {
		std::set<int> f;
		for (auto &s: g[i])
			for (auto &t: g[s])
				f.insert(t);
		for (auto &s: g[i])
			f.erase(s);
		f.erase(i);
		std::cout << f.size() << std::endl;
	}
}
