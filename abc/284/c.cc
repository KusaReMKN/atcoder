#include <deque>
#include <iostream>
#include <vector>

static inline void
dfs(std::vector<std::vector<int>> &m, int v, std::vector<bool> &p)
{
	p[v] = true;
	for (auto e: m[v])
		if (!p[e])
			dfs(m, e, p);
	return;
}

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<std::vector<int>> g(n);
	for (int i = 0; i < m; i++) {
		int u, v;
		std::cin >> u >> v;
		g[u-1].push_back(v-1);
		g[v-1].push_back(u-1);
	}

	std::vector<bool> p(n, false);
	int cnt = 0;
	for (int i = 0; i < n; i++)
		if (!p[i])
			dfs(g, i, p), cnt++;
	std::cout << cnt << std::endl;

	return 0;
}
