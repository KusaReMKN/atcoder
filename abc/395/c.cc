#include <iostream>
#include <map>
#include <set>

int
main(void)
{
	int n;
	std::cin >> n;

	std::map<int, std::set<int>> m;
	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		m[a].insert(i);
	}

	unsigned min = -1;
	for (const auto &e: m) {
		if (e.second.size() < 2)
			continue;
		auto &k = e.second;
		for (auto i = std::next(k.begin()); i != k.end(); i++)
			min = std::min((unsigned)*i - *std::prev(i)+1, min);
	}
	std::cout << (int)min << std::endl;

	return 0;
}
