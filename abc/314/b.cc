#include <algorithm>
#include <iostream>
#include <set>
#include <utility>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::vector<std::pair<int, std::set<int>>> v(n);
	for (int i = 0; i < n; i++) {
		auto &e = v[i];
		e.first = i+1;
		auto &s = e.second;

		int c;
		std::cin >> c;
		for (int j = 0; j < c; j++) {
			int a;
			std::cin >> a;
			s.insert(a);
		}
	}

	int x;
	std::cin >> x;

	std::vector<std::pair<int, std::set<int>>> m;
	std::copy_if(v.begin(), v.end(), std::back_inserter(m),
			[&x](auto &p) { return p.second.count(x); });
	std::stable_sort(m.begin(), m.end(),
			[](auto &a, auto &b) { return a.second.size() < b.second.size(); });

	std::vector<int> r;
	auto min = m[0].second.size();
	for (const auto &e: m)
		if (e.second.size() == min)
			r.push_back(e.first);
		else
			break;

	std::cout << r.size() << std::endl;
	for (const auto &e: r)
		std::cout << e << " ";
	std::cout << std::endl;

	return 0;
}
