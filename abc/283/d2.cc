#include <iostream>
#include <string>
#include <set>
#include <vector>

int
main(void)
{
	std::string s;
	std::cin >> s;

	std::vector<std::set<char>> v;
	v.push_back({});
	for (const auto &c: s)
		switch (c) {
		case '(':
			v.push_back(v.back());
			break;
		case ')':
			v.pop_back();
			break;
		default:
			if (v.back().count(c) > 0) {
				std::cout << "No" << std::endl;
				return 0;
			}
			v.back().insert(c);
			break;
		}
	std::cout << "Yes" << std::endl;

	return 0;
}
