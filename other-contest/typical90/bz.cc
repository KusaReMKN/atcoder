#include <iostream>
#include <iterator>
#include <set>
#include <map>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::map<int, std::set<int>> v;
	for (int i = 0; i < m; i++) {
		int a, b;
		std::cin >> a >> b;
		v[a].insert(b);
		v[b].insert(a);
	}

	int c = 0;
	for (const auto &e: v)
		if (*e.second.begin() < e.first
				&& (e.first < *std::next(e.second.begin(), 1)
						|| e.second.size() == 1))
			c++;
	std::cout << c << std::endl;

	return 0;
}
