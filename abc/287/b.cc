#include <iostream>
#include <set>
#include <string>
#include <vector>

int
main(void)
{
	int n, m;
	std::cin >> n >> m;

	std::vector<std::string> s(n);
	for (auto &e: s) {
		std::string s;
		std::cin >> s;
		e = s.substr(3);
	}

	std::set<std::string> p;
	for (int i = 0; i < m; i++) {
		std::string t;
		std::cin >> t;
		p.insert(t);
	}

	int cnt = 0;
	for (const auto &e: s)
		if (p.count(e))
			cnt++;
	std::cout << cnt << std::endl;

	return 0;
}
