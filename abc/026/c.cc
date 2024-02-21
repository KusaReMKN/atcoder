#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::map<int, std::vector<int>> m;
	for (auto i = 2; i <= n; i++) {
		int b;
		std::cin >> b;
		m[b].push_back(i);
	}

	std::vector<int> o;
	for (std::vector<int> s = { 1 }; s.size() > 0; ) {
		auto t = s.back();
		s.pop_back();
		o.push_back(t);
		for (const auto &e: m[t])
			s.push_back(e);
	}
	std::ranges::reverse(o);

	std::vector<long> p(n+1, 0);
	for (const auto &e: o) {
		auto v = m[e];
		for (auto &e: v)
			e = p[e];
		auto min = v.empty() ? 0 : std::ranges::min(v);
		auto max = v.empty() ? 0 : std::ranges::max(v);
		p[e] = min + max + 1;
	}
	std::cout << p[1] << std::endl;

	return 0;
}
