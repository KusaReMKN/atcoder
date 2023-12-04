#include <iostream>
#include <map>
#include <set>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::map<int, int> g;
	std::map<int, std::set<int>> v;
	for (int i = 1; i <= n; i++)
		v[0].insert(i);

	for (int i = 0; i < m; i++) {
		int a;
		std::cin >> a;
		v[g[a]].erase(a);
		v[++g[a]].insert(a);
		auto itr = v.rbegin();
		std::cout << *itr->second.begin() << std::endl;
	}

	return 0;
}
