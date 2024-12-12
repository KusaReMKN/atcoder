#include <iostream>
#include <map>
#include <set>
#include <string>

int
main(void)
{
	int n, k;
	std::cin >> n >> k;

	std::map<std::string, int> g;
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		g[s]++;
	}

	std::map<int, std::set<std::string>> q;
	for (const auto &e: g)
		q[e.second].insert(e.first);

	for (auto itr = q.rbegin(); itr != q.rend(); itr++) {
		k -= itr->second.size();
		if (k < 1) {
			if (itr->second.size() > 1)
				std::cout << "AMBIGUOUS" << std::endl;
			else
				std::cout << *itr->second.begin() << std::endl;
			return 0;
		}
	}

	return -1;
}
