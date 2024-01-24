#include <iostream>
#include <utility>
#include <set>

int
main(void)
{
	int n, m, h, k;
	std::cin >> n >> m >> h >> k;

	std::string s;
	std::cin >> s;

	std::set<std::pair<int, int>> p;
	for (int i = 0; i < m; i++) {
		int x, y;
		std::cin >> x >> y;
		p.insert({ x, y });
	}

	int cnt = 0;
	int x = 0, y = 0;
	for (const auto &c: s) {
		switch (c) {
		case 'R':
			x++;
			break;
		case 'L':
			x--;
			break;
		case 'U':
			y++;
			break;
		case 'D':
			y--;
			break;
		}
		if (--h < 0) {
			std::cout << "No" << std::endl;
			return 0;
		}
		if (h < k && p.count({ x, y })) {
			h = k;
			p.erase({ x, y });
		}
	}
	std::cout << "Yes" << std::endl;

	return 0;
}
