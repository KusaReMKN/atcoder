#include <iostream>
#include <set>
#include <string>
#include <vector>

int
main(void)
{
	std::string s;
	std::cin >> s;

	std::vector<std::set<int>> v(1);
	for (const auto c: s) {
		if (c == '(')
			continue;
		if (c == ')') {
			std::set<int> t;
			v.push_back(t);
			continue;
		}
		if (v.back().count(c) != 0) {
			std::cout << "No" << std::endl;
			std::clog << c << std::endl;
			return 0;
		}
		v.back().insert(c);
	}
	std::cout << "Yes" << std::endl;

	return 0;
}
