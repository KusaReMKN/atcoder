#include <algorithm>
#include <iostream>
#include <vector>

int
main(void)
{
	std::vector<int> e(6);
	for (auto &elem: e)
		std::cin >> elem;
	int b;
	std::cin >> b;
	std::vector<int> l(6);
	for (auto &elem: l)
		std::cin >> elem;

	std::vector<int> matched;
	std::set_intersection(e.begin(), e.end(), l.begin(), l.end(),
			std::back_inserter(matched));

	int res;
	switch (matched.size()) {
	case 6:
		res = 1;
		break;
	case 5:
		res = std::find(l.begin(), l.end(), b) != l.end() ? 2 : 3;
		break;
	case 4:
		res = 4;
		break;
	case 3:
		res = 5;
		break;
	default:
		res = 0;
	}
	std::cout << res << std::endl;

	return 0;
}
