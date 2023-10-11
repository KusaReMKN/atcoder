#include <iostream>
#include <map>
#include <set>

int
main(void)
{
	int n;
	std::cin >> n;

	int m;
	std::cin >> m;

	std::map<int, std::set<int>> v;
	for (int i = 0; i < m; i++) {
		int a, b;
		std::cin >> a >> b;
		v[a].insert(b);
		v[b].insert(a);
	}

	std::set<int> f;
	for (const auto &e: v[1])
		f.insert(e);
	std::set<int> r;
	for (const auto &e: f) {
		for (const auto &w: v[e])
			r.insert(w);
		r.insert(e);
	}
	r.erase(1);
	std::cout << r.size() << std::endl;

	return 0;
}
