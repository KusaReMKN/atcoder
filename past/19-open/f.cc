#include <deque>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string x, y;
	std::cin >> x >> y;

	std::map<std::string, std::vector<std::string>> g;
	for (int i = 0; i < n; i++) {
		std::string s, t;
		std::cin >> s >> t;
		g[s].push_back(t);
	}

	std::deque<std::string> q;
	q.push_back(x);
	std::set<std::string> v;
	while (q.size() > 0) {
		auto p = q[0];
		q.pop_front();

		if (v.count(p) > 0)
			continue;
		v.insert(p);
		for (const auto &e: g[p])
			if (v.count(e) < 1)
				q.push_back(e);
	}
	if (v.count(y) > 0)
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;

	return 0;
}
