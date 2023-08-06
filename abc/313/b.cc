#include <iostream>
#include <set>
#include <vector>

static std::set<int> already;

const static std::vector<int>
dfs(std::vector<std::set<int>> &v, int i)
{
	already.insert(i);

	std::vector<int> tails;
	auto isTail = v[i].size() == 0;
	for (const auto &next: v[i]) {
		if (already.count(next) > 0)
			continue;
		isTail = false;
		auto tmp = dfs(v, next);
		for (auto &e: tmp)
			tails.push_back(e);
	}
	if (isTail)
		tails.push_back(i);

	return tails;
}

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<std::set<int>> v(n+1);
	for (int i = 0; i < m; i++) {
		int a, b;
		std::cin >> a >> b;
		v[b].insert(a);
	}

	std::vector<int> tails;
	for (int i = 1; i <= n; i++) {
		if (already.count(i) > 0)
			continue;
		auto tmp = dfs(v, i);
		for (auto &e: tmp)
			tails.push_back(e);
	}

	for (const auto &e: tails)
		std::clog << e << ", ";

	if (tails.size() > 1) {
		std::cout << -1 << std::endl;
		return 0;
	}
	std::cout << tails[0] << std::endl;

	return 0;
}
