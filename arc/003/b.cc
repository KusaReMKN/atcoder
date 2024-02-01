#include <algorithm>
#include <iostream>
#include <set>
#include <string>

int
main(void)
{
	int n;
	std::cin >> n;

	std::set<std::string> ss;
	for (int i = 0; i < n; i++) {
		std::string s;
		std::cin >> s;
		std::ranges::reverse(s);
		ss.insert(s);
	}

	for (auto &s: ss) {
		auto t = s;
		std::ranges::reverse(t);
		std::cout << t << std::endl;
	}

	return 0;
}
