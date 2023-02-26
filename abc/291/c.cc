#include <iostream>
#include <utility>
#include <set>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::string s;
	std::cin >> s;

	int x = 0, y = 0;
	std::set<std::pair<int, int>> v;
	v.insert(std::make_pair(x, y));
	for (const auto &e: s) {
		auto k = std::make_pair(x, y);
		switch (e) {
		case 'R':
			k.first++;
			x++;
			break;
		case 'L':
			k.first--;
			x--;
			break;
		case 'U':
			k.second++;
			y++;
			break;
		case 'D':
			k.second--;
			y--;
			break;
		}
		if (v.count(k) != 0) {
			std::cout << "Yes" << std::endl;
			return 0;
		}
		v.insert(k);
	}
	std::cout << "No" << std::endl;

	return 0;
}
