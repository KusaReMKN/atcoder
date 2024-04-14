#include <iostream>
#include <map>
#include <string>

int
main(void)
{
	std::string s;
	std::cin >> s;

	std::map<char, int> m;
	for (const auto &c: s)
		m[c]++;

	std::map<int, std::string> v;
	for (const auto &e: m)
		v[e.second].push_back(e.first);

	for (const auto &e: v)
		if (e.second.size() != 0 && e.second.size() != 2) {
			std::cout << "No" << std::endl;
			return 0;
		}
	std::cout << "Yes" << std::endl;

	return 0;
}
